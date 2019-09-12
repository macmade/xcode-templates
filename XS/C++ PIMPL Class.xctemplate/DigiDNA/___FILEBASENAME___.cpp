/*******************************************************************************
 * Copyright (c) ___YEAR___, DigiDNA
 * All rights reserved
 * 
 * Unauthorised copying of this copyrighted work, via any medium is strictly
 * prohibited.
 * Proprietary and confidential.
 ******************************************************************************/

/*!
 * @file        ___FILENAME___
 * @author      Jean-David Gadina - www.digidna.net
 * @copyright   (c) ___YEAR___, DigiDNA
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
