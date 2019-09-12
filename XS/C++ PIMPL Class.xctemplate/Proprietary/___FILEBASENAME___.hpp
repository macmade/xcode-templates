/*******************************************************************************
 * Copyright (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 * All rights reserved
 * 
 * Unauthorised copying of this copyrighted work, via any medium is strictly
 * prohibited.
 * Proprietary and confidential.
 ******************************************************************************/

/*!
 * @header      ___FILENAME___
 * @copyright   (c) ___YEAR___, Jean-David Gadina - www.xs-labs.com
 */

#ifndef ___FILEBASENAMEASIDENTIFIER____HPP
#define ___FILEBASENAMEASIDENTIFIER____HPP

#include <memory>
#include <algorithm>

class ___FILEBASENAMEASIDENTIFIER___
{
    public:
        
        ___FILEBASENAMEASIDENTIFIER___( void );
        ___FILEBASENAMEASIDENTIFIER___( const ___FILEBASENAMEASIDENTIFIER___ & o );
        ___FILEBASENAMEASIDENTIFIER___( ___FILEBASENAMEASIDENTIFIER___ && o ) noexcept;
        ~___FILEBASENAMEASIDENTIFIER___( void );
        
        ___FILEBASENAMEASIDENTIFIER___ & operator =( ___FILEBASENAMEASIDENTIFIER___ o );
        
        friend void swap( ___FILEBASENAMEASIDENTIFIER___ & o1, ___FILEBASENAMEASIDENTIFIER___ & o2 );
        
    private:
        
        class IMPL;
        std::unique_ptr< IMPL > impl;
};

#endif /* ___FILEBASENAMEASIDENTIFIER____HPP */
