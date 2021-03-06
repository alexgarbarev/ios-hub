////////////////////////////////////////////////////////////////////////////////
//
//  LOUD & CLEAR
//  Copyright 2016 Loud & Clear Pty Ltd
//  All Rights Reserved.
//
//  NOTICE: Prepared by Loud & Clear on behalf of Loud & Clear. This software
//  is proprietary information. Unauthorized use is prohibited.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface CCGeneralPresenter : NSObject

- (void)didConfigureModule;

- (void)didTriggerViewReadyEvent;

//-------------------------------------------------------------------------------------------
#pragma mark - Common Init
//-------------------------------------------------------------------------------------------

- (void)setupModule;

@end
