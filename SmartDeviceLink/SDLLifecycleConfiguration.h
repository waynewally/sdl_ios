//
//  SDLManagerConfiguration.h
//  SmartDeviceLink-iOS
//
//  Created by Joel Fischer on 10/7/15.
//  Copyright © 2015 smartdevicelink. All rights reserved.
//

@import UIKit;

#import <Foundation/Foundation.h>

@class SDLAppHMIType;
@class SDLFile;
@class SDLLanguage;
@class SDLTTSChunk;


NS_ASSUME_NONNULL_BEGIN

/**
 *  Configuration options for SDLManager
 */
@interface SDLLifecycleConfiguration : NSObject <NSCopying>

- (instancetype)init NS_UNAVAILABLE;

/**
 *  A production configuration that runs using IAP. Additional functionality should be customized on the properties.
 *
 *  @param appName The name of the app.
 *  @param appId   The appId to be used. This should be registered with the radio's manufacturer.
 *
 *  @return The lifecycle configuration
 */
+ (SDLLifecycleConfiguration *)defaultConfigurationWithAppName:(NSString *)appName appId:(NSString *)appId;

/**
 *  A debug configuration that runs using TCP. Additional functionality should be customized on the properties.
 *
 *  @param appName   The name of the app.
 *  @param appId     The appId to be used. This should be registered with the radio's manufacturer.
 *  @param ipAddress The ip address of the server to connect to
 *  @param port      The port of the server to connect to
 *
 *  @return The lifecycle configuration
 */
+ (SDLLifecycleConfiguration *)debugConfigurationWithAppName:(NSString *)appName appId:(NSString *)appId ipAddress:(NSString *)ipAddress port:(NSString *)port;

/**
 *  Whether or not debug mode is enabled
 */
@property (assign, nonatomic, readonly) BOOL tcpDebugMode;

/**
 *  The ip address at which the library will look for a server
 */
@property (copy, nonatomic, readonly) NSString *tcpDebugIPAddress;

/**
 *  The port at which the library will look for a server
 */
@property (copy, nonatomic, readonly) NSString *tcpDebugPort;

/**
 *  The full name of the app
 */
@property (copy, nonatomic, readonly) NSString *appName;

/**
 *  The app id. This must be the same as the app id received from the SDL developer portal or OEM.
 */
@property (copy, nonatomic, readonly) NSString *appId;

/**
 *  This is an automatically set based on the app type
 */
@property (assign, nonatomic, readonly) BOOL isMedia;

/**
 *  The application type
 */
@property (strong, nonatomic, null_resettable) SDLAppHMIType *appType;

/**
 *  The default language to use
 */
@property (strong, nonatomic) SDLLanguage *language;

/**
 *  An array of all the supported languages
 */
@property (strong, nonatomic) NSArray<SDLLanguage *> *languagesSupported;

/**
 *  The application icon to be used on an app launching screen
 */
@property (strong, nonatomic, nullable) SDLFile *appIcon;

/**
 *  An abbrevited application name that will be used on the app launching screen if the full one would be truncated
 */
@property (copy, nonatomic, nullable) NSString *shortAppName;

/**
 *  A TTS String for voice recognition of the mobile application name.
 */
@property (copy, nonatomic, nullable) NSArray<SDLTTSChunk *> *ttsName;

/**
 *  Additional voice recognition commands. May not interfere with any other app name or global commands.
 */
@property (copy, nonatomic, nullable) NSArray<NSString *> *voiceRecognitionCommandNames;

@end

NS_ASSUME_NONNULL_END
