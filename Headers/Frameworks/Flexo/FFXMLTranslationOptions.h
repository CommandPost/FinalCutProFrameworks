//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>

@interface FFXMLTranslationOptions : NSObject <NSCopying>
{
}

+ (id)propertyKeys;
- (void)writeAsUserDefaults;
- (id)initWithUserDefaults;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKeyIfHasValue:(id)arg1;
- (id)properties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithDictionary:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOptions:(id)arg1;

@end

