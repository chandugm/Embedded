/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "lcd.h"
#include <stdio.h>
#include "esp8266.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;

I2C_HandleTypeDef hi2c1;

UART_HandleTypeDef huart6;

/* USER CODE BEGIN PV */
uint8_t Time_Date[8];
uint8_t Mem_Write_data[8]={0x58,0x23,0x12,0x02,0x11,0x06,0x24};
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_ADC1_Init(void);
static void MX_I2C1_Init(void);
static void MX_USART6_UART_Init(void);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

void task1();//Read RTC data
void task2();//Read ADC data
int task3();//checking wifi response EEPROM
void task4();//Printing and uploading to server

char I2c_Number_Buf[10];
		char Temp_Value[2];
int temp,raw_adc,flag=0;
uint8_t Tx_Buff[10];
char Rx_Buff[100];
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
		
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_ADC1_Init();
  MX_I2C1_Init();
  MX_USART6_UART_Init();
  /* USER CODE BEGIN 2 */
	RM_LCD_Init();
	WiFi_Init();
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
				task1();
				task2();
		
				task3();
				task4();
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 64;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */

  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV2;
  hadc1.Init.Resolution = ADC_RESOLUTION_12B;
  hadc1.Init.ScanConvMode = DISABLE;
  hadc1.Init.ContinuousConvMode = DISABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 1;
  hadc1.Init.DMAContinuousRequests = DISABLE;
  hadc1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure for the selected ADC regular channel its corresponding rank in the sequencer and its sample time.
  */
  sConfig.Channel = ADC_CHANNEL_10;
  sConfig.Rank = 1;
  sConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 100000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief USART6 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART6_UART_Init(void)
{

  /* USER CODE BEGIN USART6_Init 0 */

  /* USER CODE END USART6_Init 0 */

  /* USER CODE BEGIN USART6_Init 1 */

  /* USER CODE END USART6_Init 1 */
  huart6.Instance = USART6;
  huart6.Init.BaudRate = 115200;
  huart6.Init.WordLength = UART_WORDLENGTH_8B;
  huart6.Init.StopBits = UART_STOPBITS_1;
  huart6.Init.Parity = UART_PARITY_NONE;
  huart6.Init.Mode = UART_MODE_TX_RX;
  huart6.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart6.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart6) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART6_Init 2 */

  /* USER CODE END USART6_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LCD_D4_Pin|LCD_D5_Pin|LCD_D6_Pin|LCD_D7_Pin
                          |LCD_RS_Pin|LCD_RW_Pin|LCD_EN_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LCD_D4_Pin LCD_D5_Pin LCD_D6_Pin LCD_D7_Pin
                           LCD_RS_Pin LCD_RW_Pin LCD_EN_Pin */
  GPIO_InitStruct.Pin = LCD_D4_Pin|LCD_D5_Pin|LCD_D6_Pin|LCD_D7_Pin
                          |LCD_RS_Pin|LCD_RW_Pin|LCD_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void task1()
{
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x00,1, (uint8_t *)&Time_Date[0],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x01,1, (uint8_t *)&Time_Date[1],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x02,1, (uint8_t *)&Time_Date[2],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x03,1, (uint8_t *)&Time_Date[3],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x04,1, (uint8_t *)&Time_Date[4],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x05,1, (uint8_t *)&Time_Date[5],1,1000);
			HAL_I2C_Mem_Read(&hi2c1,(0x68<<1),0x06,1, (uint8_t *)&Time_Date[6],1,1000);
			RM_LCD_Goto(0,0);
//			RM_LCD_PutStr("TIME: ");
			sprintf(Temp_Value, " %02d",Time_Date[2]-6*(Time_Date[2]>>4));
		  RM_LCD_PutStr(Temp_Value);
		  RM_LCD_Write_DATA(':');
		  sprintf(Temp_Value, "%02d",Time_Date[1]-6*(Time_Date[1]>>4));
		  RM_LCD_PutStr(Temp_Value);
		  RM_LCD_Write_DATA(':');
		  sprintf(Temp_Value, "%02d",Time_Date[0]-6*(Time_Date[0]>>4));
		  RM_LCD_PutStr(Temp_Value);
			RM_LCD_Goto(0,1);
	//		RM_LCD_PutStr("DATE: ");
			sprintf(Temp_Value, " %02d",Time_Date[4]-6*(Time_Date[4]>>4));
			RM_LCD_PutStr(Temp_Value);
			RM_LCD_Write_DATA('/');
			sprintf(Temp_Value, "%02d",Time_Date[5]-6*(Time_Date[5]>>4));
			RM_LCD_PutStr(Temp_Value);
			RM_LCD_Write_DATA('/');
			sprintf(Temp_Value, "%d",Time_Date[6]-6*(Time_Date[6]>>4));
			RM_LCD_PutStr(Temp_Value);
			HAL_Delay(300);
   
	
}
void task2()
{
			HAL_ADC_Start(&hadc1);
			HAL_ADC_PollForConversion(&hadc1,10);
			raw_adc=HAL_ADC_GetValue(&hadc1); // digtal value range is 0 to 4095;
			temp=((raw_adc*3100)/10)/4096; // ANALOG SUPPLY - Reference Volatage - 3.6V ; 
			

}
int task3()
{	
	HAL_UART_Transmit(&huart6, (uint8_t *)"AT+CIPSTATUS\r\n", 16, 1000);
	if(Check_WiFi_Response()!=0)
		{
	/*writing data into EEPROM*/
				flag=1;
		Tx_Buff[0]=temp;
		Tx_Buff[1]=Time_Date[2]-6*(Time_Date[2]>>4);
		Tx_Buff[2]=Time_Date[1]-6*(Time_Date[1]>>4);
		Tx_Buff[3]=Time_Date[0]-6*(Time_Date[0]>>4);
		HAL_I2C_Mem_Write(&hi2c1,(0x50<<1),0,1,Tx_Buff,4,1000);
		HAL_Delay(300);
			return 1;
			
//			/*Reading Data From EEPROM*/
//		HAL_I2C_Mem_Read(&hi2c1,(0x50<<1),0,1, (uint8_t *)&Rx_Buff, 4,1000);
//		//RM_LCD_Clear();
//		HAL_Delay(500);
			
//			/*Printing time stamp with Temp in LCD*/
//			sprintf(Temp_Value, "%d",Tx_Buff[1]);
//			RM_LCD_PutStr(Temp_Value);
//			RM_LCD_Write_DATA(':');
//			sprintf(Temp_Value, "%d",Tx_Buff[2]);
//			RM_LCD_PutStr(Temp_Value);
//			RM_LCD_Write_DATA(':');
//			sprintf(Temp_Value, "%d",Tx_Buff[3]);
//			RM_LCD_PutStr(Temp_Value);
//		  RM_LCD_Goto(11,0);
//		  sprintf(Temp_Value, "%d",Tx_Buff[0]);
//		  RM_LCD_PutStr(Temp_Value);
//		  RM_LCD_Put_Char(0xDF);
//			RM_LCD_Put_Char('C');
//			RM_LCD_Goto(10,1);
//			RM_LCD_PutStr("ERROR");
//			HAL_Delay(1000);
//			HAL_Delay(1000);
//			HAL_Delay(300);
	}
			
}
void task4()
{
	if(flag==0)
	{
			//RM_LCD_Clear();
	
			sprintf(Temp_Value, "%d", temp);
			RM_LCD_Goto(10,0);
			RM_LCD_PutStr("T:");
			RM_LCD_PutStr(Temp_Value);
			RM_LCD_Put_Char(0xDF);
			RM_LCD_Put_Char('C');
			RM_LCD_Goto(10,1);
			RM_LCD_PutStr("OK");
			HAL_Delay(300);
			WiFi_Transmit();//uploading into server
			
			RM_LCD_Clear();
}
	}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

