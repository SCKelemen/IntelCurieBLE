#include <BLEAttribute.h>
#include <BLECentral.h>
#include <BLECharacteristic.h>
#include <BLECommon.h>
#include <BLEDescriptor.h>
#include <BLEPeripheral.h>
#include <BLEService.h>
#include <BLETypedCharacteristic.h>
#include <BLETypedCharacteristics.h>
#include <BLEUuid.h>
#include <CurieBLE.h>

//Environmental Sensing Service 
/*
BLEService ESS("181A");
  BLECharacteristic DiscriptorValueChanged;
  BLECharacteristic WindDirectionApparent;
  BLECharacteristic WindSpeedApparent;
  BLECharacteristic DewPoint;
  BLECharacteristic Elevation;
  BLECharacteristic GustFactor;
  BLECharacteristic HeatIndex;
  BLECharacteristic Humitidy;
  BLECharacteristic Irradiance;
  BLECharacteristic PollenConcentration;
  BLECharacteristic Rainfall;
  BLECharacteristic Pressure;
  BLECharacteristic Temperature;
  BLECharacteristic WindDirectionTrue;
  BLECharacteristic WindSpeedTrue;
  BLECharacteristic UVIndex;
  BLECharacteristic WindChill;
  BLECharacteristic BarometricPressureTrend;
  BLECharacteristic MagneticDeclination;
  BLECharacteristic MagneticFluxDensity2D;
  BLECharacteristic MagneticFluxDensity3D;*/
  
  //Location and Navigation Service
/*
BLEService LNS("1819");
  BLECharacteristic LNFeature("2A6A", BLERead, 4);
  BLECharacteristic LocationSpeed("2A67", BLENotify, 27);
  BLECharacteristic PositionQuality("2A69", BLERead, 2);
  BLECharacteristic LNControlPoint("2A6B", BLEWrite|BLEIndicate, 2);
  BLECharacteristic Navigation("2A68", BLENotify, 19); */

//Device Information Service
BLEService DIS("180A");
  BLECharacteristic ManufacturerName("2A29", BLERead, 16); 
  BLECharacteristic ModelNumber("2A24", BLERead, 16);
  BLECharacteristic SerialNumber("2A25", BLERead, 20);
  BLECharacteristic HardwareRevision("2A27", BLERead, 7);
  BLECharacteristic FirmwareRevision("2A26", BLERead, 7);
  BLECharacteristic SoftwareRevision("2A28", BLERead, 7); 
  BLECharacteristic SystemID("2A23", BLERead, 20);
  
  //Generic Access Service
BLEService GAS("1800");
  BLECharacteristic DeviceName("2A00", BLERead, 20);
  BLECharacteristic Appearance("2A01", BLERead, 2);
  //BLECharacteristic PeripheralPreferredConnectionParameters();
