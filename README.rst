###################################################################################
Thư viện giao tiếp với cảm biến độ ẩm Capacitive Soil Moisture cho Arduino, ESP8266
###################################################################################

:Info: Github <https://github.com/thiminhnhut/CapSoilSensor>
:Author: Thi Minh Nhựt <thiminhnhut@gmail.com>
:Date: $Date: 16/03/2019 $
:Revision: $Revision: 1.0.0 $
:Description: Thư viện giao tiếp với cảm biến độ ẩm Capacitive Soil Moisture cho Arduino, ESP8266

====================================================================================================

.. sectnum::

.. contents:: Nội dung

====================================================================================================

Nội dung thực hiện
******************

Thư viện CapSoilSensor
======================

* Thư mục source: `src <https://github.com/thiminhnhut/CapSoilSensor/blob/master/src>`_.

  * File `CapSoilSensor.h <https://github.com/thiminhnhut/CapSoilSensor/blob/master/src/CapSoilSensor.h>`_:

  .. code::

    CapSoilSensor(uint8_t pin);

    float getData();

* Ví dụ: `TestSensor.ino <https://github.com/thiminhnhut/CapSoilSensor/blob/master/examples/TestSensor/TestSensor.ino>`_

Chức năng của thư viện CapSoilSensor
====================================

* Đọc giá trị độ ẩm đất của cảm biến Capacitive Soil Moisture Sensor V1.2
