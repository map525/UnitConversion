/////////////////////////////////////////////////////////////////////////////////
//2345678901234567890123456789012345678901234567890123456789012345678901234567890
/////////////////////////////////////////////////////////////////////////////////
// PROJECT: Unit Conversion
//
// Copyright Copyright 2024 MAP
//
// Unpublished - Rights reserved under the Copyright Laws of the United States
//
/////////////////////////////////////////////////////////////////////////////////
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
//
/////////////////////////////////////////////////////////////////////////////////
//
// File SingleSystem.java
//
// The SingleSystem class contains unit systems all having units of the same
// type. Examples include density, force, power, and angle. A SingleSystem
// contains only a single type group but can consist of units from many
// different systems. Typically, a SingleSystem is either modern or historical
// but not ancient. It is a child class of Conversion which defines its 
// interface.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class SingleSystem extends Conversion
{
    /*
     * Default constructor.
     */
    public SingleSystem()
    {
        super();
    }

    /*
     * Constructor.
     *
     * @param name - (input) name of the single system.
     */
    public SingleSystem(String name)
    {
        super(name);
    }

    /*
     * Constructor.
     *
     * @param name - (input) the name of the SingleSystem.
     * @param map  - (input) the units in the SingleSystem.
     */
    public SingleSystem(String name,  
                        HashMap<String, BaseSystem> map)
    {
        super(name, map);
    }

    /*
     * Copy constructor.
     *
     * @param other - (input) the other SingleSystem to copy.
     */
    public SingleSystem(SingleSystem other)
    {
        super(other);
    }
    
    /*
     * Eeturn a list of type or system names in the BaseSystem.
     *
     * @param bs - (input) BaseSystem whose names are required.
     *
     * @return - a list of names.
     */
    @Override
    protected List<String> baseSystemNames(BaseSystem bs)
    {
         return bs.systemNames("unit");
    }
    
    /*
     * Convert from one unit to another. Example of usage is as follows:
     * 
     *   double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
                                              "SI", "Celsius", "INT", false);
     *
     * converts two meters (SI system) to equivalent feet (US system).
     *     
     * @param value    - (input) value of the unit to be converted.
     * @param fromType - (input) 'from' unit type.
     * @param toType   - (input) 'to' unit type.
     * @param from     - (input) name of 'from' unit.
     * @param fromSys  - (input) name of 'from' system.
     * @param to       - (input) name of 'to' unit.
     * @param toSys    - (input) name of 'to' system.
     * @param asIs     - (input) flag if false construct full unit names from 
     *                           inputs.
     *
     * @return - the value of the converted unit (to).
     */ 
    @Override
    public double convertUnit(double value,  
                              String fromType, 
                              String toType, 
                              String from, 
                              String fromSys, 
                              String to, 
                              String toSys, 
                              boolean asIs)
    {
        String type = fromType;
        if (!_map.containsKey(type) || fromType != toType)
        {
             return UBASE.ERROR;
        }
       else
       {
            String sysFrom = (asIs ? from : fromSys + "[" + from + "]");
            String sysTo = (asIs ? to : toSys + "[" + to + "]");

            BaseSystem system = _map.get(type);
            UBASE dbTo = system.unit("unit",sysTo);
            UBASE dbFrom = system.unit("unit",sysFrom);
            if (dbFrom.valid() && dbTo.valid() && dbTo.value().asDouble() != 0  
                               && dbTo.type() == dbFrom.type())
            { 
                double fromValue = value * dbFrom.value().asDouble() 
                                         + dbFrom.offset().asDouble();
                return (fromValue - dbTo.offset().asDouble()) / dbTo.value().asDouble();
            }
            else
            {
                return UBASE.ERROR;
            }
       }
    }   
    
    /*
     * Construct a full type name. Type name is dependent on
     * on the system: either CanonicalSystem or SingleSystem.
     *
     * @param type   -   (input) the type
     * @param system -   (input) the system.
     *
     * @return - the system specific type name.
     */
    @Override
    protected String fullType(String type, 
                              String system)
    {
        return "unit";
    }

    /*
     * Construct the full unit name from the system and unit names.
     * 
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return - the full unit name (unit name plus of the system name).
     */
    @Override
    public String fullUnitName(String systemName, 
                               String unitName)
    {
        return super.fullName(systemName, unitName);
    }
    
    /*
     * Construct a local type name.
     *
     * @param type  - (input) the unit type.
     *
     * @returns - type for the unit based on class.
     */
    @Override
    protected String localType(String type)
    {
          return "unit";
    }

    /*
     * Filter TypeGroup.
     *
     * @param name - (input0 type group name to keep
     * @param tg   - (input) type group to filter
     */
    protected void typeGroupFilter(String name, 
                                   TypeGroup tg)
    {
        List<String> names = tg.unitNames();
        for (String  item : names)
        {
            if(item.contains(name))
            {
                 continue;
            }
            else
            {
                tg.removeUnit(item);
            }
        }
    }
    
    /*
     * Get a list of system names in the SingleSystem.
     *
     * @param type   - (input) the unit type.
     *
     * @return - list of system names in the SingleSystem.
     */ 
    @Override
    public List<String> systemNames(String type)
    {
        List<String> keys = new ArrayList<String>();
        singleCoreNames(type, keys);
        return keys;
    }

    /*
     * Get a list of all system names in the SingleSystem.
     *
     * @return - list of system name in the SingleSystem.
     */ 
    @Override
    public List<String> systemNames()
    {
        return coreNames();
    }

    /*
     * Get a list of type names in the SingleSystem.
     *
     * @return - list of type name in the SingleSystem.
     */ 
    @Override
    public List<String> typeNames()
    {
        return mapNames();
    }       
}
// EOF
