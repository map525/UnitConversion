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
// File CanonicalSystem.java
//
// All unit systems, ancient, historical, and modern contain the four unit types
// for measuring distance, area, weight (mass), and volume. Volume is divided
// into two types: liquid and dry. These five types are termed canonical types
// since (almost) all other types can be expressed as some combination of these
// five types. For example density is mass divided by volume and force is
// mass times length divided by time. The CanonicalSystem class contains systems
// containing these five canonical types. It is a child class of the Conversion
// class which defines the interface to this class.
//
// Version: 1.0
//
/////////////////////////////////////////////////////////////////////////////////

package UnitConversion;

import java.util.*;

public class CanonicalSystem extends Conversion
{
    /*
     * Default constructor.
     */
    public CanonicalSystem()
    {
        super();
    }

    /*
     * Constructor.
     *
     * @param - name (input) name of the CanonicalSystem.
     */
    public CanonicalSystem(String name)
    {
        super(name);
    }

    /*
     * Constructor.
     *
     * @param name - (input) the name of the CanonicalSystem.
     * @param map  - (input) the units in the CanonicalSystem.
     */
    public CanonicalSystem(String name,  
                           HashMap<String, BaseSystem> map)
    {
        super(name, map);
    }

    /*
     * Copy constructor.
     *
     * @param other - (input) the other CanonicalSystem to copy.
     */
    public CanonicalSystem(CanonicalSystem other)
    {
        super(other);
    }

     /*
     * Construct the actual type name. Type name is dependent on
     * on the system: either CanonicalSystem or SingleSystem.
     * 
     * @param type   - (input) the type.
     * @param system - (input) the system.
     * 
     * @return - system specific type.
     */
     @Override
     protected String actualType(String type, 
                                 String system)
     {
        return system;
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
         return bs.typeNames();
    }

    /*
     * Check is system is part of unit name.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */
    @Override
    protected boolean checkName(String sysName, 
                                String unitName)
    {
        return false;
    }

    /*
     * Convert from one unit to another. Example of usage is as follows:
     * 
     *   double tempCelsius = usb.convertUnit(300.0,  "temperature", "Kelvin", 
                                              "SI", "Celsius", "INT", false);
     *
     * converts two meters (SI system) to equivalent feet (US system).
     *     
     * @param value    - (input) value of the unit to be converted
     * @param fromType - (input) 'from' unit type
     * @param toType   - (input) 'to' unit type
     * @param from     - (input) name of 'from' unit.
     * @param fromSys  - (input) name of 'from' system.
     * @param to       - (input) name of 'to' unit.
     * @param toSys    - (input) name of 'to' system.
     * @param asIs     - (input) flag if false construct full unit names from 
     *                           inputs.
     *
     * @return - the value of the converted unit.
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
       if (!_map.containsKey(fromSys) || !_map.containsKey(toSys) )
       {
          return UBASE.ERROR;
       }
       else
       {
            BaseSystem fromBS = _map.get(fromSys);
            BaseSystem toBS   = _map.get(toSys);
            UBASE dbTo   = toBS.unit(toType, to);
            UBASE dbFrom = fromBS.unit(fromType, from);

            if (dbTo.valid() && dbFrom.valid() && dbTo.value().dvalue() != 0 
                             && dbTo.type() == dbFrom.type())
            {
                double fromValue = value * dbFrom.value().dvalue() + dbFrom.offset().dvalue();
                return (fromValue - dbTo.offset().dvalue()) / dbTo.value().dvalue();
            }
            else
            {
                return UBASE.ERROR;
            }
       }
    }

    /*
     * Construct a full unit name from system and unit name. A full  
     * unit name is of the form systeName[unitName] e.g. SI[newton].
     * This method is overridden in the child class.
     *
     * @param sysName  - (input) the system name.
     * @param unitName - (input) the unit name.
     *
     * @return - the full unit name.
     */ 
    @Override
    protected String fullName(String sysName, 
                              String unitName)
    {
        return unitName;
    }

    /*
     * Construct the full unit name from the system and unit names.
     *
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return - the full unit name (unit name plus the system name).
     */
    @Override
    public String fullUnitName(String systemName, 
                               String unitName)
    {
         return super.rawUnitName(unitName);
    }

    /*
     * Construct the local unit name from the system and unit names.
     *
     * @param systemName - (input) the system name.
     * @param unitName   - (input) the unit name.
     *
     * @return -  the full unit name (unit name plus the system name).
     */
    @Override
    protected String localName(String systemName, 
                               String unitName)
    {
         return super.fullName(systemName, unitName);
    }

    /*
     * Get the unit name from the full unit name.
     *
     * @param unitName - (input) the full unit name.
     *
     * @return - the unit name stripped of the system name.
     */
    @Override
    public String rawUnitName(String unitName)
    {
         return unitName;
    }

    /*
     * Get a list of system names in the CanonicalSystem.
     *
     * @param type   - (input) the unit type.
     *
     * @return - list of system name in the CanonicalSystem.
     */ 
    @Override
    public List<String> systemNames(String type)
    {
        //ArrayList<String> keys = new ArrayList<String>();
        //for(Map.Entry<String, BaseSystem> entry : _map.entrySet())
        //{
        //    if (entry.getKey() == type)
        //    {
        //         keys.add(entry.getKey());
        //    }
        //    else
        //    {
        //         continue;
        //    }
        //}
        //return keys;
        return systemNames();
    }

    /*
     * Get a list of all system names in the CanonicalSystem.
     *
     * @return - list of system name in the CanonicalSystem.
     */ 
    @Override
    public List<String> systemNames()
    {
        return mapNames();
    }

    /*
     * Get a list of type names in the CanonicalSystem.
     *
     * @return - list of type name in the CanonicalSystem.
     */ 
    @Override
    public List<String> typeNames()
    {
        return coreNames();
    }
    
    /*
     * Return true if conversion between type is allowed, false otherwise.
     * 
     * @param fromType - (input) the 'from' unit type.
     * @param toType   - (input) the 'to' unit type.
     *
     * @return - true if conversion between type is allowed, false otherwise.
     */
    @Override
    public Boolean validateType(String fromType,
                                String toType)
    {
        List<String> tNames = typeNames();
        List<String> aNames = Arrays.asList("Dry","Liquid","Volume");
        boolean fromOK = (tNames.size() == 0 ? true : tNames.contains(fromType));
        boolean toOK   = (tNames.size() == 0 ? true : tNames.contains(toType));
        if (fromOK && toOK)
        {
            if (fromType == toType)
            {
                return true;
            }
            else if(aNames.contains(fromType) && aNames.contains(toType))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }  
}
// EOF
