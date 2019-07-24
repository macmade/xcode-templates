/*******************************************************************************
 * Copyright (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 * All rights reserved
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
