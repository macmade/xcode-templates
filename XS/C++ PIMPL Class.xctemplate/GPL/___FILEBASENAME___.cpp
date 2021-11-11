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

#include "___FILEBASENAME___.hpp"

class ___FILEBASENAMEASIDENTIFIER___::IMPL
{
    public:
        
        IMPL();
        IMPL( const IMPL & o );
        ~IMPL();
};

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___():
    impl( std::make_unique< IMPL >() )
{}

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___( const ___FILEBASENAMEASIDENTIFIER___ & o ):
    impl( std::make_unique< IMPL >( *( o.impl ) ) )
{}

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___( ___FILEBASENAMEASIDENTIFIER___ && o ) noexcept:
    impl( std::move( o.impl ) )
{}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___()
{}

___FILEBASENAMEASIDENTIFIER___ & ___FILEBASENAMEASIDENTIFIER___::operator =( ___FILEBASENAMEASIDENTIFIER___ o )
{
    swap( *( this ), o );
    
    return *( this );
}

void swap( ___FILEBASENAMEASIDENTIFIER___ & o1, ___FILEBASENAMEASIDENTIFIER___ & o2 )
{
    using std::swap;
    
    swap( o1.impl, o2.impl );
}

___FILEBASENAMEASIDENTIFIER___::IMPL::IMPL()
{}

___FILEBASENAMEASIDENTIFIER___::IMPL::IMPL( const IMPL & o )
{
    ( void )o;
}

___FILEBASENAMEASIDENTIFIER___::IMPL::~IMPL()
{}
