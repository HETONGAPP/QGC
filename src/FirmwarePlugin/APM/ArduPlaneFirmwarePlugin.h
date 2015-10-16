/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2014 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

/// @file
///     @author Pritam Ghanghas <pritam.ghanghas@gmail.com>

#ifndef ArduPlaneFirmwarePlugin_H
#define ArduPlaneFirmwarePlugin_H

#include "APMFirmwarePlugin.h"

class APMPlaneMode: public APMCustomMode
{
public:
    enum Mode {
        MANUAL        = 0,
        CIRCLE        = 1,
        STABILIZE     = 2,
        TRAINING      = 3,
        ACRO          = 4,
        FLY_BY_WIRE_A = 5,
        FLY_BY_WIRE_B = 6,
        CRUISE        = 7,
        AUTOTUNE      = 8,
        RESERVED_9    = 9,  // RESERVED FOR FUTURE USE
        AUTO          = 10,
        RTL           = 11,
        LOITER        = 12,
        RESERVED_13   = 13, // RESERVED FOR FUTURE USE
        RESERVED_14   = 14, // RESERVED FOR FUTURE USE
        GUIDED        = 15,
        INITIALIZING  = 16
    };
    static const int modeCount = 17;

    APMPlaneMode(uint32_t mode, bool settable);
};

class ArduPlaneFirmwarePlugin : public APMFirmwarePlugin
{
    Q_OBJECT

    DECLARE_QGC_SINGLETON(ArduPlaneFirmwarePlugin, ArduPlaneFirmwarePlugin)
    
public:

protected:
    /// All access to singleton is through instance()
    ArduPlaneFirmwarePlugin(QObject* parent = NULL);
    
private:
};

#endif
