/*******************************************************************************
 * Copyright (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *  -   Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *  -   Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *  -   Neither the name of 'Jean-David Gadina' nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
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
