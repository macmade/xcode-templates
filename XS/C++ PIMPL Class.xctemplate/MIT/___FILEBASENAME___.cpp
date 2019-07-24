/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) ___YEAR___ Jean-David Gadina - www.xs-labs.com
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @file        ___FILENAME___
 * @copyright   (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 */

#include "___FILEBASENAME___.hpp"

class ___FILEBASENAMEASIDENTIFIER___::IMPL
{
    public:
        
        IMPL( void );
        IMPL( const IMPL & o );
        ~IMPL( void );
};

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___( void ):
    impl( std::make_unique< IMPL >() )
{}

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___( const ___FILEBASENAMEASIDENTIFIER___ & o ):
    impl( std::make_unique< IMPL >( *( o.impl ) ) )
{}

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___( ___FILEBASENAMEASIDENTIFIER___ && o ) noexcept:
    impl( std::move( o.impl ) )
{}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___( void )
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

___FILEBASENAMEASIDENTIFIER___::IMPL::IMPL( void )
{}

___FILEBASENAMEASIDENTIFIER___::IMPL::IMPL( const IMPL & o )
{
    ( void )o;
}

___FILEBASENAMEASIDENTIFIER___::IMPL::~IMPL( void )
{}
