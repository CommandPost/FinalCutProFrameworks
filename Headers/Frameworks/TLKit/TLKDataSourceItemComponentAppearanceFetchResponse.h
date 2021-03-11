//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/TLKDataSourceFetchResponse-Protocol.h>
#import <TLKit/TLKDelegateFetchRequest-Protocol.h>

@class NSString;

@interface TLKDataSourceItemComponentAppearanceFetchResponse : NSObject <TLKDelegateFetchRequest, TLKDataSourceFetchResponse>
{
    id _dataSourceObject;
    double _height;
    unsigned long long _propertiesToFetchMask;
}

@property(nonatomic) unsigned long long propertiesToFetchMask; // @synthesize propertiesToFetchMask=_propertiesToFetchMask;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) id dataSourceObject; // @synthesize dataSourceObject=_dataSourceObject;
- (void)saveHeightToItemComponent:(id)arg1 changeLog:(id)arg2;
- (void)storePropertiesToDatabase:(id)arg1 changeLog:(id)arg2;
- (id)fetchPropertiesFromDelegateProxy:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

