////////////////////////////////////////////////////////////////////////////////
//
//  FANHUB
//  Copyright 2016 FanHub Pty Ltd
//  All Rights Reserved.
//
//  NOTICE: Prepared by AppsQuick.ly on behalf of FanHub. This software
//  is proprietary information. Unauthorized use is prohibited.
//
////////////////////////////////////////////////////////////////////////////////


@class CCPersistentModel;


@interface CCSafeRLMObjectProxy : NSProxy

- (instancetype)initWithRLMObject:(RLMObject *)object;

- (BOOL)isThreadSafe;

@end
