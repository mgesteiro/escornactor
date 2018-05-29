
# Firmware para el Escornactor

Éste es el *programa Arduino* (=*firmware*) para el **Escornactor**.

El **Escornactor** es una modificación del robot **Escornabot** que lo
convierte en un tractor. Se creó para ser utilizado en los campos de
cultivo de Marte, como parte de la **"Misión a Marte 2017"** del
**IES A Xunqueira II de Pontevedra**.

## Descarga

Puedes clonar el repositorio (*git clone https://github.com/mgesteiro/escornactor.git*) o bajarte un zip con el código ([desde aquí](https://github.com/mgesteiro/escornactor/archive/stable.zip)).


## Instalación

Abre el fichero *firmware.ino* dentro de la carpeta *firmware* con tu herramienta favorita (por ejemplo el [IDE de Arduino](https://www.arduino.cc/en/Main/Software)), y programa tu **Escornactor** de la misma forma que lo harías con el *Escornabot*.

## Conexiones

El servo **SG90** se conecta a los pines de *GND*, *5V* y *D11* del *Arduino nano* (cables negro, rojo y naranja del servo respectivamente), aunque el pin de señal (D11) puede ser cambiado a otro (recuerda actualizar la constante *ARADO_PIN* en el fichero *Configuration.h* acordemente).


## Información

* Más información sobre el **Escornabot** en [escornabot.com](http://escornabot.com)
* Más información sobre el **Escornactor** en la [Wiki del Escornabot](http://escornabot.org/wiki/index.php/Escornactor)
* [IES A Xunqueira II](http://www.edu.xunta.gal/centros/iesxunqueira2/) de Pontevedra


Este proyecto fué presentado en:
* *Feria Piteas*, de la Fundación Barrié, en *A Cidade da Cultura* de Santiago de Compostela (mayo 2017)
* *OSHWDem 2017* de A Coruña (noviembre 2017)