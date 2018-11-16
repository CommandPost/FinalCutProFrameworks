//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIODALControl.h>

@class NSArray, NSMutableArray;

@interface MIODALSelectorControl : MIODALControl
{
    NSMutableArray *mValues;
    BOOL mSettingValue;
}

@property(retain, nonatomic) NSArray *values; // @synthesize values=mValues;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)propertyDidChange:(const struct CMIOObjectPropertyAddress *)arg1;
@property unsigned int value;
- (id)name;
- (id)exposedBindings;
- (void)dealloc;
- (id)initWithCMIODALControlID:(unsigned int)arg1 classID:(unsigned int)arg2;

@end

