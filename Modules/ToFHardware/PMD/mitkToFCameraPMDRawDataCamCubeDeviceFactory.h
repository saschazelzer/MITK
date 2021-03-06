/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/
#ifndef __mitkToFCameraPMDRawDataCamCubeDeviceFactory_h
#define __mitkToFCameraPMDRawDataCamCubeDeviceFactory_h

#include "mitkPMDModuleExports.h"
#include "mitkToFCameraPMDRawDataCamCubeDevice.h"
#include "mitkAbstractToFDeviceFactory.h"

namespace mitk
{

  /**
  * \brief ToFPMDRawPlayerDeviceFactory is an implementation of the factory pattern to generate Raw Player Devices.
  * ToFPMDRawPlayerDeviceFactory inherits from AbstractToFDeviceFactory which is a MicroService interface.
  * This offers users the oppertunity to generate new Raw Player Devices via a global instance of this factory.
  * @ingroup ToFHardware
  */
class MITK_PMDMODULE_EXPORT ToFCameraPMDRawDataCamCubeDeviceFactory : public itk::LightObject, public AbstractToFDeviceFactory {

public:

  ToFCameraPMDRawDataCamCubeDeviceFactory()
  {
    this->m_DeviceNumber = 0;
  }
  /*!
   \brief Defining the Factorie�s Name, here for the RawDataDeviceFactory.
   */
   std::string GetFactoryName()
   {
       return std::string("PMD RAW Data Camcube Factory ");
   }
   std::string GetCurrentDeviceName()
   {
     std::stringstream name;
     name << "PMD Raw Data CamCube Device "<< m_DeviceNumber++;
     return name.str();
   }

private:
     /*!
   \brief Create an instance of a ToFPMDRawDataDevice.
   */
   ToFCameraDevice::Pointer createToFCameraDevice()
   {
     ToFCameraPMDRawDataCamCubeDevice::Pointer device = ToFCameraPMDRawDataCamCubeDevice::New();

     return device.GetPointer();
   }
   int m_DeviceNumber;
};
}
#endif
