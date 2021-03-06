//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Additions)
- (void)removeObserver:(id)arg1 forKeyPaths:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPaths:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)toggleBoolForKey:(id)arg1;
- (void)setDefaultFloat:(float)arg1 forKey:(id)arg2;
- (void)setDefaultInt:(int)arg1 forKey:(id)arg2;
- (void)setDefaultBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDefaultObject:(id)arg1 forKey:(id)arg2;
- (void)setDefaultNonEmptyObject:(id)arg1 forKey:(id)arg2;
- (void)setRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGRect)rectForKey:(id)arg1 defaultValue:(struct CGRect)arg2;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
@end

