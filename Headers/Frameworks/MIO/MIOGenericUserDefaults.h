//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MIOGenericUserDefaults : NSObject
{
    NSString *myApplicationIdentifier;
}

+ (id)genericUserDefaultsForApplicationId:(id)arg1;
- (BOOL)synchronize;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)hasKey:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationId:(id)arg1;

@end

