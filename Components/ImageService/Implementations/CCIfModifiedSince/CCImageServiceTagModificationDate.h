////////////////////////////////////////////////////////////////////////////////
//
//  LOUD&CLEAR
//  Copyright 2017 Loud&Clear Pty Ltd
//  All Rights Reserved.
//
//  NOTICE: Prepared by AppsQuick.ly on behalf of Loud&Clear. This software
//  is proprietary information. Unauthorized use is prohibited.
//
////////////////////////////////////////////////////////////////////////////////

#import "CCImageServiceTag.h"
#import "FastCoder.h"


@interface CCImageServiceTagModificationDate : FastCoder <CCImageServiceTag>

@property (nonatomic) NSDate *modificationDate;

@end
