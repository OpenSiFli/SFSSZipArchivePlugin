//
//  SFSSZipArchivePlugin.h
//  SFSSZipArchivePlugin
//
//  Created by Sean on 2026/3/10.
//

#import <Foundation/Foundation.h>
#import <SifliOCore/SifliOCore.h>

NS_ASSUME_NONNULL_BEGIN
static NSString * const kSFSSZipArchiverVersion = @"1.0.1";
@interface SFSSZipArchiver: NSObject<SFZipHelperDelegate>
+ (SFSSZipArchiver *)shared;

@end

NS_ASSUME_NONNULL_END
