// Arado.h
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

#ifndef _ARADO_H
#define _ARADO_H

#include <stdint.h>
#include <Servo.h>

/**
 * \brief Mueve el servo arriba y abajo.
 * \author @miguel
 */
class Arado
{
public:

    /**
     * Constructor.
     * @param pin Pin where the servo is connected
     */
    Arado(uint8_t pin);

    /**
     * Does the hardware initialization.
     */
    void init();

    void subir();
    void bajar();
    void cambiar();



private:

    uint8_t _pin;
    Servo _servo;
    uint8_t _posicion;

};

#endif // _ARADO_H

// EOF
