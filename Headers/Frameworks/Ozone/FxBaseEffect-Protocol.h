//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FxBaseEffect
- (BOOL)variesOverTime;
- (BOOL)addParameters;
- (id)properties;

@optional
- (BOOL)parameterChanged:(unsigned int)arg1;
- (BOOL)finishInitialSetup:(id *)arg1;
@end

