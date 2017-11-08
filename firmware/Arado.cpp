// Buzzer.cpp
/*

Copyright (C) 2014-2017 Escornabot - http://escornabot.com

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
USA.

See LICENSE.txt for details

*/

#include "Arado.h"
#include <Arduino.h>
#include "Configuration.h"

//////////////////////////////////////////////////////////////////////

Arado::Arado(uint8_t pin)
{
    this->_pin = pin;
}

//////////////////////////////////////////////////////////////////////

void Arado::init()
{
    _servo.attach(_pin);
    for(int i=0; i < 2; i++)
    {
        bajar();
        subir();
    }
    _posicion = 0;
}

void Arado::subir()
{
    _servo.write(20);
    delay(1000);
}

void Arado::bajar()
{
    _servo.write(90);
    delay(1000);
}

void Arado::cambiar()
{
    if (_posicion == 0) {
        bajar();
        _posicion = 1;
    } else {
        subir();
        _posicion = 0;
    }
}


//////////////////////////////////////////////////////////////////////
// utility functions
//////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////

// EOF
