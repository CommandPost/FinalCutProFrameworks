//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFSkimmerDelegate
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 owner:(id)arg4;
- (void)stopSkimmingForOwner:(id)arg1;

@optional
- (id)skimmer:(id)arg1 menuForEvent:(id)arg2;
- (void)skimmerDoubleClicked:(id)arg1;
@end

