#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H
#ifdef GPIOA_AHB
#define GPIOA_DATA * ((u32 *) 0x400583FC)
#define GPIOA_DIR * ((u32 *) 0x40058400)
#define GPIOA_IS * ((u32 *) 0x40058404)
#define GPIOA_IBE * ((u32 *) 0x40058408)
#define GPIOA_IEV * ((u32 *) 0x4005840C)
#define GPIOA_IM * ((u32 *) 0x40058410)
#define GPIOA_RIS * ((u32 *) 0x40058414)
#define GPIOA_MIS * ((u32 *) 0x40058418)
#define GPIOA_ICR * ((u32 *) 0x4005841C)
#define GPIOA_AFSEL * ((u32 *) 0x40058420)
#define GPIOA_DR2R * ((u32 *) 0x40058500)
#define GPIOA_DR4R * ((u32 *) 0x40058504)
#define GPIOA_DR8R * ((u32 *) 0x40058508)
#define GPIOA_ODR * ((u32 *) 0x4005850C)
#define GPIOA_PUR * ((u32 *) 0x40058510)
#define GPIOA_PDR * ((u32 *) 0x40058514)
#define GPIOA_SLR * ((u32 *) 0x40058518)
#define GPIOA_DEN * ((u32 *) 0x4005851C)
#define GPIOA_LOCK * ((u32 *) 0x40058520)
#define GPIOA_CR * ((u32 *) 0x40058524)
#define GPIOA_AMSEL * ((u32 *) 0x40058528)
#define GPIOA_PCTL * ((u32 *) 0x4005852C)
#define GPIOA_ADCCTL * ((u32 *) 0x40058530)
#define GPIOA_DMACTL * ((u32 *) 0x40058534)
#define GPIOA_PeriphID4 * ((u32 *) 0x40058FD0)
#define GPIOA_PeriphID5 * ((u32 *) 0x40058FD4)
#define GPIOA_PeriphID6 * ((u32 *) 0x40058FD8)
#define GPIOA_PeriphID7 * ((u32 *) 0x40058FDC)
#define GPIOA_PeriphID0 * ((u32 *) 0x40058FE0)
#define GPIOA_PeriphID1 * ((u32 *) 0x40058FE4)
#define GPIOA_PeriphID2 * ((u32 *) 0x40058FE8)
#define GPIOA_PeriphID3 * ((u32 *) 0x40058FEC)
#define GPIOA_CellID0 * ((u32 *) 0x40053FF0)
#define GPIOA_CellID1 * ((u32 *) 0x40053FF4)
#define GPIOA_CellID2 * ((u32 *) 0x40053FF8)
#define GPIOA_CellID3 * ((u32 *) 0x40053FFC)
#else
/*GPIOA*/
#define GPIOA_DATA * ((u32 *) 0x400043FC)
#define GPIOA_DIR * ((u32 *) 0x40004400)
#define GPIOA_IS * ((u32 *) 0x40004404)
#define GPIOA_IBE * ((u32 *) 0x40004408)
#define GPIOA_IEV * ((u32 *) 0x4000440C)
#define GPIOA_IM * ((u32 *) 0x40004410)
#define GPIOA_RIS * ((u32 *) 0x40004414)
#define GPIOA_MIS * ((u32 *) 0x40004418)
#define GPIOA_ICR * ((u32 *) 0x4000441C)
#define GPIOA_AFSEL * ((u32 *) 0x40004420)
#define GPIOA_DR2R * ((u32 *) 0x40004500)
#define GPIOA_DR4R * ((u32 *) 0x40004504)
#define GPIOA_DR8R * ((u32 *) 0x40004508)
#define GPIOA_ODR * ((u32 *) 0x4000450C)
#define GPIOA_PUR * ((u32 *) 0x40004510)
#define GPIOA_PDR * ((u32 *) 0x40004514)
#define GPIOA_SLR * ((u32 *) 0x40004518)
#define GPIOA_DEN * ((u32 *) 0x4000451C)
#define GPIOA_LOCK * ((u32 *) 0x40004520)
#define GPIOA_CR * ((u32 *) 0x40004524)
#define GPIOA_AMSEL * ((u32 *) 0x40004528)
#define GPIOA_PCTL * ((u32 *) 0x4000452C)
#define GPIOA_ADCCTL * ((u32 *) 0x40004530)
#define GPIOA_DMACTL * ((u32 *) 0x40004534)
#define GPIOA_PeriphID4 * ((u32 *) 0x40004FD0)
#define GPIOA_PeriphID5 * ((u32 *) 0x40004FD4)
#define GPIOA_PeriphID6 * ((u32 *) 0x40004FD8)
#define GPIOA_PeriphID7 * ((u32 *) 0x40004FDC)
#define GPIOA_PeriphID0 * ((u32 *) 0x40004FE0)
#define GPIOA_PeriphID1 * ((u32 *) 0x40004FE4)
#define GPIOA_PeriphID2 * ((u32 *) 0x40004FE8)
#define GPIOA_PeriphID3 * ((u32 *) 0x40003FEC)
#define GPIOA_CellID0 * ((u32 *) 0x40003FF0)
#define GPIOA_CellID1 * ((u32 *) 0x40003FF4)
#define GPIOA_CellID2 * ((u32 *) 0x40003FF8)
#define GPIOA_CellID3 * ((u32 *) 0x40003FFC)
#endif

/*GPIOB*/
#define GPIOB_DATA * ((u32 *) 0x400053FC)
#define GPIOB_DIR * ((u32 *) 0x40005400)
#define GPIOB_IS * ((u32 *) 0x40005404)
#define GPIOB_IBE * ((u32 *) 0x40005408)
#define GPIOB_IEV * ((u32 *) 0x4000540C)
#define GPIOB_IM * ((u32 *) 0x40005410)
#define GPIOB_RIS * ((u32 *) 0x40005414)
#define GPIOB_MIS * ((u32 *) 0x40005418)
#define GPIOB_ICR * ((u32 *) 0x4000541C)
#define GPIOB_AFSEL * ((u32 *) 0x40005420)
#define GPIOB_DR2R * ((u32 *) 0x40005500)
#define GPIOB_DR4R * ((u32 *) 0x40005504)
#define GPIOB_DR8R * ((u32 *) 0x40005508)
#define GPIOB_ODR * ((u32 *) 0x4000550C)
#define GPIOB_PUR * ((u32 *) 0x40005510)
#define GPIOB_PDR * ((u32 *) 0x40005514)
#define GPIOB_SLR * ((u32 *) 0x40005518)
#define GPIOB_DEN * ((u32 *) 0x4000551C)
#define GPIOB_LOCK * ((u32 *) 0x40005520)
#define GPIOB_CR * ((u32 *) 0x40005524)
#define GPIOB_AMSEL * ((u32 *) 0x40005528)
#define GPIOB_PCTL * ((u32 *) 0x4000552C)
#define GPIOB_ADCCTL * ((u32 *) 0x40005530)
#define GPIOB_DMACTL * ((u32 *) 0x40005534)
#define GPIOB_PeriphID4 * ((u32 *) 0x40005FD0)
#define GPIOB_PeriphID5 * ((u32 *) 0x40005FD4)
#define GPIOB_PeriphID6 * ((u32 *) 0x40005FD8)
#define GPIOB_PeriphID7 * ((u32 *) 0x40005FDC)
#define GPIOB_PeriphID0 * ((u32 *) 0x40005FE0)
#define GPIOB_PeriphID1 * ((u32 *) 0x40005FE4)
#define GPIOB_PeriphID2 * ((u32 *) 0x40005FE8)
#define GPIOB_PeriphID3 * ((u32 *) 0x40005FEC)
#define GPIOB_CellID0 * ((u32 *) 0x40005FF0)
#define GPIOB_CellID1 * ((u32 *) 0x40005FF4)
#define GPIOB_CellID2 * ((u32 *) 0x40005FF8)
#define GPIOB_CellID3 * ((u32 *) 0x40005FFC)

/*GPIOC*/
#define GPIOC_DATA * ((u32 *) 0x400063FC)
#define GPIOC_DIR * ((u32 *) 0x40006400)
#define GPIOC_IS * ((u32 *) 0x40006404)
#define GPIOC_IBE * ((u32 *) 0x40006408)
#define GPIOC_IEV * ((u32 *) 0x4000640C)
#define GPIOC_IM * ((u32 *) 0x40006410)
#define GPIOC_RIS * ((u32 *) 0x40006414)
#define GPIOC_MIS * ((u32 *) 0x40006418)
#define GPIOC_ICR * ((u32 *) 0x4000641C)
#define GPIOC_AFSEL * ((u32 *) 0x40006420)
#define GPIOC_DR2R * ((u32 *) 0x40006500)
#define GPIOC_DR4R * ((u32 *) 0x40006504)
#define GPIOC_DR8R * ((u32 *) 0x40006508)
#define GPIOC_ODR * ((u32 *) 0x4000650C)
#define GPIOC_PUR * ((u32 *) 0x40006510)
#define GPIOC_PDR * ((u32 *) 0x40006514)
#define GPIOC_SLR * ((u32 *) 0x40006518)
#define GPIOC_DEN * ((u32 *) 0x4000651C)
#define GPIOC_LOCK * ((u32 *) 0x40006520)
#define GPIOC_CR * ((u32 *) 0x40006524)
#define GPIOC_AMSEL * ((u32 *) 0x40006528)
#define GPIOC_PCTL * ((u32 *) 0x4000652C)
#define GPIOC_ADCCTL * ((u32 *) 0x40006530)
#define GPIOC_DMACTL * ((u32 *) 0x40006534)
#define GPIOC_PeriphID4 * ((u32 *) 0x40006FD0)
#define GPIOC_PeriphID5 * ((u32 *) 0x40006FD4)
#define GPIOC_PeriphID6 * ((u32 *) 0x40006FD8)
#define GPIOC_PeriphID7 * ((u32 *) 0x40006FDC)
#define GPIOC_PeriphID0 * ((u32 *) 0x40006FE0)
#define GPIOC_PeriphID1 * ((u32 *) 0x40006FE4)
#define GPIOC_PeriphID2 * ((u32 *) 0x40006FE8)
#define GPIOC_PeriphID3 * ((u32 *) 0x40006FEC)
#define GPIOC_CellID0 * ((u32 *) 0x40006FF0)
#define GPIOC_CellID1 * ((u32 *) 0x40006FF4)
#define GPIOC_CellID2 * ((u32 *) 0x40006FF8)
#define GPIOC_CellID3 * ((u32 *) 0x40006FFC)

/*GPIOD port*/
#define GPIOD_DATA * ((u32 *) 0x400073FC)
#define GPIOD_DIR * ((u32 *) 0x40007400)
#define GPIOD_IS * ((u32 *) 0x40007404)
#define GPIOD_IBE * ((u32 *) 0x40007408)
#define GPIOD_IEV * ((u32 *) 0x4000740C)
#define GPIOD_IM * ((u32 *) 0x40007410)
#define GPIOD_RIS * ((u32 *) 0x40007414)
#define GPIOD_MIS * ((u32 *) 0x40007418)
#define GPIOD_ICR * ((u32 *) 0x4000741C)
#define GPIOD_AFSEL * ((u32 *) 0x40007420)
#define GPIOD_DR2R * ((u32 *) 0x40007500)
#define GPIOD_DR4R * ((u32 *) 0x40007504)
#define GPIOD_DR8R * ((u32 *) 0x40007508)
#define GPIOD_ODR * ((u32 *) 0x4000750C)
#define GPIOD_PUR * ((u32 *) 0x40007510)
#define GPIOD_PDR * ((u32 *) 0x40007514)
#define GPIOD_SLR * ((u32 *) 0x40007518)
#define GPIOD_DEN * ((u32 *) 0x4000751C)
#define GPIOD_LOCK * ((u32 *) 0x40007520)
#define GPIOD_CR * ((u32 *) 0x40007524)
#define GPIOD_AMSEL * ((u32 *) 0x40007528)
#define GPIOD_PCTL * ((u32 *) 0x4000752C)
#define GPIOD_ADCCTL * ((u32 *) 0x40007530)
#define GPIOD_DMACTL * ((u32 *) 0x40007534)
#define GPIOD_PeriphID4 * ((u32 *) 0x40007FD0)
#define GPIOD_PeriphID5 * ((u32 *) 0x40007FD4)
#define GPIOD_PeriphID6 * ((u32 *) 0x40007FD8)
#define GPIOD_PeriphID7 * ((u32 *) 0x40007FDC)
#define GPIOD_PeriphID0 * ((u32 *) 0x40007FE0)
#define GPIOD_PeriphID1 * ((u32 *) 0x40007FE4)
#define GPIOD_PeriphID2 * ((u32 *) 0x40007FE8)
#define GPIOD_PeriphID3 * ((u32 *) 0x40007FEC)
#define GPIOD_CellID0 * ((u32 *) 0x40007FF0)
#define GPIOD_CellID1 * ((u32 *) 0x40007FF4)
#define GPIOD_CellID2 * ((u32 *) 0x40007FF8)
#define GPIOD_CellID3 * ((u32 *) 0x40007FFC)

/*GPIOE port*/
#define GPIOE_DATA * ((u32 *) 0x400073FC)
#define GPIOE_DIR * ((u32 *) 0x40007400)
#define GPIOE_IS * ((u32 *) 0x40007404)
#define GPIOE_IBE * ((u32 *) 0x40007408)
#define GPIOE_IEV * ((u32 *) 0x4000740C)
#define GPIOE_IM * ((u32 *) 0x40007410)
#define GPIOE_RIS * ((u32 *) 0x40007414)
#define GPIOE_MIS * ((u32 *) 0x40007418)
#define GPIOE_ICR * ((u32 *) 0x4000741C)
#define GPIOE_AFSEL * ((u32 *) 0x40007420)
#define GPIOE_DR2R * ((u32 *) 0x40007500)
#define GPIOE_DR4R * ((u32 *) 0x40007504)
#define GPIOE_DR8R * ((u32 *) 0x40007508)
#define GPIOE_ODR * ((u32 *) 0x4000750C)
#define GPIOE_PUR * ((u32 *) 0x40007510)
#define GPIOE_PDR * ((u32 *) 0x40007514)
#define GPIOE_SLR * ((u32 *) 0x40007518)
#define GPIOE_DEN * ((u32 *) 0x4000751C)
#define GPIOE_LOCK * ((u32 *) 0x40007520)
#define GPIOE_CR * ((u32 *) 0x40007524)
#define GPIOE_AMSEL * ((u32 *) 0x40007528)
#define GPIOE_PCTL * ((u32 *) 0x4000752C)
#define GPIOE_ADCCTL * ((u32 *) 0x4000730)
#define GPIOE_DMACTL * ((u32 *) 0x40007534)
#define GPIOE_PeriphID4 * ((u32 *) 0x40007FD0)
#define GPIOE_PeriphID5 * ((u32 *) 0x40007FD4)
#define GPIOE_PeriphID6 * ((u32 *) 0x40007FD8)
#define GPIOE_PeriphID7 * ((u32 *) 0x40007FDC)
#define GPIOE_PeriphID0 * ((u32 *) 0x40007FE0)
#define GPIOE_PeriphID1 * ((u32 *) 0x40007FE4)
#define GPIOE_PeriphID2 * ((u32 *) 0x40007FE8)
#define GPIOE_PeriphID3 * ((u32 *) 0x40007FEC)
#define GPIOE_CellID0 * ((u32 *) 0x40007FF0)
#define GPIOE_CellID1 * ((u32 *) 0x40007FF4)
#define GPIOE_CellID2 * ((u32 *) 0x40007FF8)
#define GPIOE_CellID3 * ((u32 *) 0x40007FFC)

/*GPIOF port*/
#define GPIOF_DATA * ((u32 *) 0x400253FC)
#define GPIOF_DIR * ((u32 *) 0x40025400)
#define GPIOF_IS * ((u32 *) 0x40025404)
#define GPIOF_IBE * ((u32 *) 0x40025408)
#define GPIOF_IEV * ((u32 *) 0x4002540C)
#define GPIOF_IM * ((u32 *) 0x40025410)
#define GPIOF_RIS * ((u32 *) 0x40025414)
#define GPIOF_MIS * ((u32 *) 0x40025418)
#define GPIOF_ICR * ((u32 *) 0x4002541C)
#define GPIOF_AFSEL * ((u32 *) 0x40025420)
#define GPIOF_DR2R * ((u32 *) 0x40025500)
#define GPIOF_DR4R * ((u32 *) 0x40025504)
#define GPIOF_DR8R * ((u32 *) 0x40025508)
#define GPIOF_ODR * ((u32 *) 0x4002550C)
#define GPIOF_PUR * ((u32 *) 0x40025510)
#define GPIOF_PDR * ((u32 *) 0x40025514)
#define GPIOF_SLR * ((u32 *) 0x40025518)
#define GPIOF_DEN * ((u32 *) 0x4002551C)
#define GPIOF_LOCK * ((u32 *) 0x40025520)
#define GPIOF_CR * ((u32 *) 0x40025524)
#define GPIOF_AMSEL * ((u32 *) 0x40025528)
#define GPIOF_PCTL * ((u32 *) 0x4002552C)
#define GPIOF_ADCCTL * ((u32 *) 0x4002530)
#define GPIOF_DMACTL * ((u32 *) 0x40025534)
#define GPIOF_PeriphID4 * ((u32 *) 0x40025FD0)
#define GPIOF_PeriphID5 * ((u32 *) 0x40025FD4)
#define GPIOF_PeriphID6 * ((u32 *) 0x40025FD8)
#define GPIOF_PeriphID7 * ((u32 *) 0x40025FDC)
#define GPIOF_PeriphID0 * ((u32 *) 0x40025FE0)
#define GPIOF_PeriphID1 * ((u32 *) 0x40025FE4)
#define GPIOF_PeriphID2 * ((u32 *) 0x40025FE8)
#define GPIOF_PeriphID3 * ((u32 *) 0x40025FEC)
#define GPIOF_CellID0 * ((u32 *) 0x40025FF0)
#define GPIOF_CellID1 * ((u32 *) 0x40025FF4)
#define GPIOF_CellID2 * ((u32 *) 0x40025FF8)
#define GPIOF_CellID3 * ((u32 *) 0x40025FFC)

#endif
