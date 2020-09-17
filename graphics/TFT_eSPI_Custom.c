        ////////////////////////////////////////////////////
        //       TFT_eSPI generic driver functions        //
        ////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
// Global variables
////////////////////////////////////////////////////////////////////////////////////////

// Select the SPI port to use
SPIClass& spi = SPI;


////////////////////////////////////////////////////////////////////////////////////////
//                   Standard SPI 16 bit colour TFT                               
////////////////////////////////////////////////////////////////////////////////////////

/***************************************************************************************
** Function name:           pushBlock - for STM32
** Description:             Write a block of pixels of the same colour
***************************************************************************************/
void TFT_eSPI::pushBlock(uint16_t color, uint32_t len){

  while ( len-- ) {tft_Write_16(color);}
}

/***************************************************************************************
** Function name:           pushPixels - for STM32
** Description:             Write a sequence of pixels
***************************************************************************************/
void TFT_eSPI::pushPixels(const void* data_in, uint32_t len){

  uint16_t *data = (uint16_t*)data_in;

  if (_swapBytes) while ( len-- ) {tft_Write_16(*data); data++;}
  else while ( len-- ) {tft_Write_16S(*data); data++;}
}

////////////////////////////////////////////////////////////////////////////////////////
// End of display interface specific functions
////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////
//                                DMA FUNCTIONS                                         
////////////////////////////////////////////////////////////////////////////////////////

//                Placeholder for DMA functions

/*
Minimal function set to support DMA:

bool TFT_eSPI::initDMA(void)
void TFT_eSPI::deInitDMA(void)
bool TFT_eSPI::dmaBusy(void)
void TFT_eSPI::pushPixelsDMA(uint16_t* image, uint32_t len)
void TFT_eSPI::pushImageDMA(int32_t x, int32_t y, int32_t w, int32_t h, uint16_t* image)

*/
