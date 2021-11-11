/*******************************************************************************
 * Copyright (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 ******************************************************************************/

/*!
 * @file        ___FILENAME___
 * @copyright   (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 */

#ifndef ___FILEBASENAMEASIDENTIFIER____HPP
#define ___FILEBASENAMEASIDENTIFIER____HPP

#include <memory>
#include <algorithm>

class ___FILEBASENAMEASIDENTIFIER___
{
    public:
        
        ___FILEBASENAMEASIDENTIFIER___();
        ___FILEBASENAMEASIDENTIFIER___( const ___FILEBASENAMEASIDENTIFIER___ & o );
        ___FILEBASENAMEASIDENTIFIER___( ___FILEBASENAMEASIDENTIFIER___ && o ) noexcept;
        ~___FILEBASENAMEASIDENTIFIER___();
        
        ___FILEBASENAMEASIDENTIFIER___ & operator =( ___FILEBASENAMEASIDENTIFIER___ o );
        
        friend void swap( ___FILEBASENAMEASIDENTIFIER___ & o1, ___FILEBASENAMEASIDENTIFIER___ & o2 );
        
    private:
        
        class IMPL;
        std::unique_ptr< IMPL > impl;
};

#endif /* ___FILEBASENAMEASIDENTIFIER____HPP */
