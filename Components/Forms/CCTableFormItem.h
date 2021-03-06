//
//  CCTableFormItem.h
//  iOS Hub
//
//  Created by Aleksey Garbarev on 01/12/2016.
//  Copyright © 2016 Loud & Clear. All rights reserved.
//

#import "CCTableViewItem.h"

@protocol CCFormOutput;

@interface CCTableFormItem : CCTableViewItem

@property (copy, readwrite, nonatomic) NSString *name;
@property (nonatomic, strong) id value;
@property (nonatomic, strong) id resetValue;

@property (weak, readonly, nonatomic) id<CCFormOutput> output;

// Action bar
@property (copy, readwrite, nonatomic) void (^actionBarNavButtonTapHandler)(id item); //handler for nav button on ActionBar
@property (copy, readwrite, nonatomic) void (^actionBarDoneButtonTapHandler)(id item); //handler for done button on ActionBar

@property (nonatomic, strong) NSString *validationError;

@end
