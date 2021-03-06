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

#import <Foundation/Foundation.h>


@interface NSArray<ObjectType> (Map)

- (NSArray *)arrayUsingMap:(id(^)(ObjectType object))mapBlock;
- (NSMutableDictionary *)dictionaryUsingMap:(id(^)(ObjectType value))mapBlock;

@end

@interface NSMutableArray<ObjectType> (Map)

- (void)map:(id(^)(ObjectType object))mapBlock;

@end

@interface NSSet<ObjectType> (Map)

- (NSSet *)setUsingMap:(id(^)(ObjectType object))mapBlock;

@end

@interface NSMutableSet<ObjectType> (Map)

- (void)map:(id(^)(ObjectType object))mapBlock;

@end

@interface NSMutableDictionary<KeyType,  ObjectType> (Map)

- (void)mapObjects:(id(^)(KeyType key, ObjectType object))mapBlock;

- (void)mapKeys:(id(^)(KeyType key, ObjectType object))mapBlock;

@end


@interface NSDictionary<__covariant KeyType, __covariant ObjectType> (Map)

- (NSDictionary *)dictionaryUsingObjectMap:(id(^)(KeyType key, ObjectType object))mapBlock;

- (NSDictionary *)dictionaryUsingKeyMap:(id(^)(KeyType key, ObjectType object))mapBlock;

@end
