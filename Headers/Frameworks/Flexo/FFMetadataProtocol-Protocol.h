//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FFModelLocking.h"

@protocol FFMetadataProtocol <FFModelLocking>
- (id)md;
- (id)mdMappedKeyPathForKey:(id)arg1;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdValueForKey:(id)arg1;
- (id)mdKeysInRange:(CDStruct_e83c9415)arg1;
- (id)mdValuesForKeys:(id)arg1 inRange:(CDStruct_e83c9415)arg2;

@optional
- (BOOL)validateMetadataItem:(id)arg1;
@end
