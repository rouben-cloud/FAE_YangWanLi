#include "bsp.h"

void GPIO_Init(void)
{
//     output low
        _pac = 0;
        _pbc = 0;
        _pcc = 0;
        _pdc = 0;
    
        _pa = 0;
        _pb = 0;
        _pc = 0;
        _pd = 0;
    
        _papu = 0;
        _pbpu = 0;
        _pcpu = 0;
        _pdpu = 0;

//     output high
//    _pac = 0;
//    _pbc = 0;
//    _pcc = 0;
//    _pdc = 0;
//
//    _pa = 1;
//    _pb = 1;
//    _pc = 1;
//    _pd = 1;
//
//    _papu = 0;
//    _pbpu = 0;
//    _pcpu = 0;
//    _pdpu = 0;
    
//     input high
//    _pac = 0xff;
//    _pbc = 0xff;
//    _pcc = 0xff;
//    _pdc = 0xff;
//
//    _pa = 0xff;
//    _pb = 0xff;
//    _pc = 0xff;
//    _pd = 0xff;
//
//    _papu = 0xff;
//    _pbpu = 0xff;
//    _pcpu = 0xff;
//    _pdpu = 0xff;
}

void System_Init(void)
{
    _wdtc   = 0xA8;
    _fhiden = 0;
    _fsiden = 0;
    _emi    = 0;

    _lvrc  = 0b11110000;
    _cton  = 0;
    _ston  = 0;
    _pton  = 0;
    _adcen = 0;
    _cmpen = 0;
    _simen = 0;
    _uren  = 0;
    _lcden = 0;
    _lvden = 0;
}