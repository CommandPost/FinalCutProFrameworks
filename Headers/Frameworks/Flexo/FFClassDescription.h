//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSClassDescription.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FFClassDescription : DSClassDescription
{
    NSMutableDictionary *_XMLProperties;
    NSMutableDictionary *_XMLPropertiesNotDep;
    NSMutableDictionary *_XMLPropertiesByXMLKey;
    NSMutableSet *_requiredXMLKeys;
    NSString *_rootXMLKey;
    BOOL _hasDeprecatedKeys;
}

+ (id)classMap;
+ (id)descriptionForClass:(Class)arg1;
+ (void)releaseSharedInstance;
- (id)initWithClass:(Class)arg1;
- (id)init;
- (void)dealloc;
- (void)addAttribute:(SEL)arg1 valueType:(CDUnknownFunctionPointerType)arg2 xmlInfo:(CDStruct_a8c8b80b)arg3 flags:(unsigned int)arg4;
- (void)addRelationship:(SEL)arg1 type:(int)arg2 entity:(const char *)arg3 xmlInfo:(CDStruct_a8c8b80b)arg4 flags:(unsigned int)arg5;
- (void)addProperty:(SEL)arg1 type:(int)arg2 entity:(const char *)arg3 xmlInfo:(CDStruct_a8c8b80b)arg4 valueType:(CDUnknownFunctionPointerType)arg5 flags:(unsigned int)arg6;
- (id)classXMLKey;
- (void)setClassXMLKey:(id)arg1;
- (void)addPropertySelector:(SEL)arg1 type:(int)arg2;
- (id)xmlPropertiesIncludeDepricated:(BOOL)arg1;
- (id)xmlPropertiesByXMLKey;
- (id)xmlProperties;
- (id)requiredKeys;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

