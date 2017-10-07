//
//  main.cpp
//  PRG-4-19-Spectral-Analysis
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  If a scientist knows the wavelength of an electromagnetic wave, he or she can determine
//  what type of radiation it is. Write a program that asks for the wavelength of
//  an electromagnetic wave in meters and then displays what that wave is according to
//  the chart below. (For example, a wave with a wavelength of 1E-10 meters would
//  be an X-ray.)
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
    float fltWavelength;
    
    const float FLT_WAVELENGTH_01_MAX = 0.5f,
                FLT_WAVELENGTH_02_RADIO = 1e-2,
                FLT_WAVELENGTH_03_MICROWAVE = 1e-3,
                FLT_WAVELENGTH_04_INFRARED = 7e-7,
                FLT_WAVELENGTH_05_VISIBLE_LIGHT = 4e-7,
                FLT_WAVELENGTH_06_ULTRAVIOLET = 1e-8;
                //FLT_WAVELENGTH_07_XRAY = 1e-11;
    
    string STR_WAVELENGTH_02_RADIO = "Radio",
           STR_WAVELENGTH_03_MICROWAVE = "Microwave",
           STR_WAVELENGTH_04_INFRARED = "Infrared",
           STR_WAVELENGTH_05_VISIBLE_LIGHT = "Visible Light",
           STR_WAVELENGTH_06_ULTRAVIOLET = "Ultraviolet",
	       STR_WAVELENGTH_07_XRAY = "X-Ray";
    
    cout << "Please enter a wavelength of light less than 0.5 meters: ";
    cin >> fltWavelength;
    
    while(!cin || (fltWavelength > FLT_WAVELENGTH_01_MAX))
    {
        cout << "Please enter a valid wavelength.\n";
        cin.clear();
        cin.ignore();
        cin >> fltWavelength;
    }
    
    cout << "That wave type of that wavelength is ";
    
    if(fltWavelength < FLT_WAVELENGTH_01_MAX && fltWavelength >= FLT_WAVELENGTH_02_RADIO)
    {
        cout << STR_WAVELENGTH_02_RADIO << endl;
    }
    else if(fltWavelength < FLT_WAVELENGTH_02_RADIO && fltWavelength >= FLT_WAVELENGTH_03_MICROWAVE)
    {
        cout << STR_WAVELENGTH_03_MICROWAVE << endl;
    }
    else if(fltWavelength < FLT_WAVELENGTH_03_MICROWAVE && fltWavelength >= FLT_WAVELENGTH_04_INFRARED)
    {
        cout << STR_WAVELENGTH_04_INFRARED << endl;
    }
    else if(fltWavelength < FLT_WAVELENGTH_04_INFRARED && fltWavelength >= FLT_WAVELENGTH_05_VISIBLE_LIGHT)
    {
        cout << STR_WAVELENGTH_05_VISIBLE_LIGHT << endl;
    }
    else if(fltWavelength < FLT_WAVELENGTH_05_VISIBLE_LIGHT && fltWavelength >= FLT_WAVELENGTH_06_ULTRAVIOLET)
    {
        cout << STR_WAVELENGTH_06_ULTRAVIOLET << endl;
    }
    else
    {
        cout << STR_WAVELENGTH_07_XRAY << endl;
    }
    
    return 0;
}


