//  SmartDeviceLink.h
//

#import <UIKit/UIKit.h>

//! Project version number for SmartDeviceLink.
FOUNDATION_EXPORT double SmartDeviceLinkVersionNumber;

//! Project version string for SmartDeviceLink.
FOUNDATION_EXPORT const unsigned char SmartDeviceLinkVersionString[];

/***** Proxy *****/
#import "SDLProxy.h"
#import "SDLProxyFactory.h"
#import "SDLProxyListener.h"

/***** Transport *****/
#import "SDLAbstractTransport.h"
#import "SDLIAPSessionDelegate.h"
#import "SDLIAPTransport.h"
#import "SDLTCPTransport.h"
#import "SDLTransportDelegate.h"

/***** Protocol *****/
#import "SDLAbstractProtocol.h"
#import "SDLProtocol.h"
#import "SDLProtocolListener.h"

// Header
#import "SDLProtocolHeader.h"

// Message
#import "SDLProtocolMessage.h"

/***** RPCs *****/
// Superclasses
#import "SDLEnum.h"
#import "SDLRPCMessage.h"
#import "SDLRPCNotification.h"
#import "SDLRPCRequest.h"
#import "SDLRPCResponse.h"
#import "SDLRPCStruct.h"

// Requests
#import "SDLAddCommand.h"
#import "SDLAddSubMenu.h"
#import "SDLAlert.h"
#import "SDLAlertManeuver.h"
#import "SDLButtonPress.h"
#import "SDLChangeRegistration.h"
#import "SDLCreateInteractionChoiceSet.h"
#import "SDLDeleteCommand.h"
#import "SDLDeleteFile.h"
#import "SDLDeleteInteractionChoiceSet.h"
#import "SDLDeleteSubMenu.h"
#import "SDLDiagnosticMessage.h"
#import "SDLDialNumber.h"
#import "SDLEncodedSyncPData.h"
#import "SDLEndAudioPassThru.h"
#import "SDLGetDTCs.h"
#import "SDLGetInteriorVehicleData.h"
#import "SDLGetSystemCapability.h"
#import "SDLGetVehicleData.h"
#import "SDLGetWayPoints.h"
#import "SDLListFiles.h"
#import "SDLPerformAudioPassThru.h"
#import "SDLPerformInteraction.h"
#import "SDLPutFile.h"
#import "SDLReadDID.h"
#import "SDLRegisterAppInterface.h"
#import "SDLResetGlobalProperties.h"
#import "SDLScrollableMessage.h"
#import "SDLSendHapticData.h"
#import "SDLSendLocation.h"
#import "SDLSetAppIcon.h"
#import "SDLSetDisplayLayout.h"
#import "SDLSetGlobalProperties.h"
#import "SDLSetInteriorVehicleData.h"
#import "SDLSetMediaClockTimer.h"
#import "SDLShow.h"
#import "SDLShowConstantTBT.h"
#import "SDLSlider.h"
#import "SDLSpeak.h"
#import "SDLSubscribeButton.h"
#import "SDLSubscribeVehicleData.h"
#import "SDLSubscribeWayPoints.h"
#import "SDLSyncPData.h"
#import "SDLUnregisterAppInterface.h"
#import "SDLUnsubscribeButton.h"
#import "SDLUnsubscribeVehicleData.h"
#import "SDLUnsubscribeWayPoints.h"
#import "SDLUpdateTurnList.h"

// Responses
#import "SDLAddCommandResponse.h"
#import "SDLAddSubMenuResponse.h"
#import "SDLAlertManeuverResponse.h"
#import "SDLAlertResponse.h"
#import "SDLButtonPressResponse.h"
#import "SDLChangeRegistrationResponse.h"
#import "SDLCreateInteractionChoiceSetResponse.h"
#import "SDLDeleteCommandResponse.h"
#import "SDLDeleteFileResponse.h"
#import "SDLDeleteInteractionChoiceSetResponse.h"
#import "SDLDeleteSubMenuResponse.h"
#import "SDLDiagnosticMessageResponse.h"
#import "SDLDialNumberResponse.h"
#import "SDLEncodedSyncPDataResponse.h"
#import "SDLEndAudioPassThruResponse.h"
#import "SDLGenericResponse.h"
#import "SDLGetDTCsResponse.h"
#import "SDLGetInteriorVehicleDataResponse.h"
#import "SDLGetSystemCapabilityResponse.h"
#import "SDLGetVehicleDataResponse.h"
#import "SDLGetWayPointsResponse.h"
#import "SDLListFilesResponse.h"
#import "SDLPerformAudioPassThruResponse.h"
#import "SDLPerformInteractionResponse.h"
#import "SDLPutFileResponse.h"
#import "SDLReadDIDResponse.h"
#import "SDLRegisterAppInterfaceResponse.h"
#import "SDLResetGlobalPropertiesResponse.h"
#import "SDLScrollableMessageResponse.h"
#import "SDLSendHapticDataResponse.h"
#import "SDLSendLocationResponse.h"
#import "SDLSetAppIconResponse.h"
#import "SDLSetDisplayLayoutResponse.h"
#import "SDLSetGlobalPropertiesResponse.h"
#import "SDLSetInteriorVehicleDataResponse.h"
#import "SDLSetMediaClockTimerResponse.h"
#import "SDLShowConstantTBTResponse.h"
#import "SDLShowResponse.h"
#import "SDLSliderResponse.h"
#import "SDLSpeakResponse.h"
#import "SDLSubscribeButtonResponse.h"
#import "SDLSubscribeVehicleDataResponse.h"
#import "SDLSubscribeWayPointsResponse.h"
#import "SDLSyncPDataResponse.h"
#import "SDLUnregisterAppInterfaceResponse.h"
#import "SDLUnsubscribeButtonResponse.h"
#import "SDLUnsubscribeVehicleDataResponse.h"
#import "SDLUnsubscribeWayPointsResponse.h"
#import "SDLUpdateTurnListResponse.h"

// Notifications
#import "SDLOnAppInterfaceUnregistered.h"
#import "SDLOnAudioPassThru.h"
#import "SDLOnButtonEvent.h"
#import "SDLOnButtonPress.h"
#import "SDLOnCommand.h"
#import "SDLOnDriverDistraction.h"
#import "SDLOnEncodedSyncPData.h"
#import "SDLOnHMIStatus.h"
#import "SDLOnHashChange.h"
#import "SDLOnInteriorVehicleData.h"
#import "SDLOnKeyboardInput.h"
#import "SDLOnLanguageChange.h"
#import "SDLOnLockScreenStatus.h"
#import "SDLOnPermissionsChange.h"
#import "SDLOnSyncPData.h"
#import "SDLOnSystemRequest.h"
#import "SDLOnTBTClientState.h"
#import "SDLOnTouchEvent.h"
#import "SDLOnVehicleData.h"
#import "SDLOnWayPointChange.h"

// Structs
#import "SDLAirbagStatus.h"
#import "SDLAppInfo.h"
#import "SDLAudioPassThruCapabilities.h"
#import "SDLBeltStatus.h"
#import "SDLBodyInformation.h"
#import "SDLButtonCapabilities.h"
#import "SDLChoice.h"
#import "SDLClusterModeStatus.h"
#import "SDLClimateControlCapabilities.h"
#import "SDLClimateControlData.h"
#import "SDLDIDResult.h"
#import "SDLDateTime.h"
#import "SDLDeviceInfo.h"
#import "SDLDeviceStatus.h"
#import "SDLDisplayCapabilities.h"
#import "SDLECallInfo.h"
#import "SDLEmergencyEvent.h"
#import "SDLGPSData.h"
#import "SDLHapticRect.h"
#import "SDLHMICapabilities.h"
#import "SDLHMIPermissions.h"
#import "SDLHeadLampStatus.h"
#import "SDLImage.h"
#import "SDLImageField.h"
#import "SDLImageResolution.h"
#import "SDLKeyboardProperties.h"
#import "SDLLocationCoordinate.h"
#import "SDLLocationDetails.h"
#import "SDLMenuParams.h"
#import "SDLMetadataTags.h"
#import "SDLModuleData.h"
#import "SDLMyKey.h"
#import "SDLNavigationCapability.h"
#import "SDLOasisAddress.h"
#import "SDLParameterPermissions.h"
#import "SDLPermissionItem.h"
#import "SDLPhoneCapability.h"
#import "SDLPresetBankCapabilities.h"
#import "SDLRadioControlCapabilities.h"
#import "SDLRadioControlData.h"
#import "SDLRDSData.h"
#import "SDLRectangle.h"
#import "SDLRemoteControlCapabilities.h"
#import "SDLScreenParams.h"
#import "SDLSingleTireStatus.h"
#import "SDLSoftButton.h"
#import "SDLSoftButtonCapabilities.h"
#import "SDLStartTime.h"
#import "SDLSyncMsgVersion.h"
#import "SDLSystemCapability.h"
#import "SDLTTSChunk.h"
#import "SDLTemperature.h"
#import "SDLTextField.h"
#import "SDLTireStatus.h"
#import "SDLTouchCoord.h"
#import "SDLTouchEvent.h"
#import "SDLTouchEventCapabilities.h"
#import "SDLTurn.h"
#import "SDLVehicleDataResult.h"
#import "SDLVehicleType.h"
#import "SDLVideoStreamingCapability.h"
#import "SDLVideoStreamingFormat.h"
#import "SDLVrHelpItem.h"

// Enums
#import "SDLAmbientLightStatus.h"
#import "SDLAppHMIType.h"
#import "SDLAppInterfaceUnregisteredReason.h"
#import "SDLAudioStreamingState.h"
#import "SDLAudioType.h"
#import "SDLBitsPerSample.h"
#import "SDLButtonEventMode.h"
#import "SDLButtonName.h"
#import "SDLButtonPressMode.h"
#import "SDLCarModeStatus.h"
#import "SDLCharacterSet.h"
#import "SDLCompassDirection.h"
#import "SDLComponentVolumeStatus.h"
#import "SDLDefrostZone.h"
#import "SDLDeliveryMode.h"
#import "SDLDeviceLevelStatus.h"
#import "SDLDimension.h"
#import "SDLDisplayType.h"
#import "SDLDriverDistractionState.h"
#import "SDLECallConfirmationStatus.h"
#import "SDLEmergencyEventType.h"
#import "SDLFileType.h"
#import "SDLFuelCutoffStatus.h"
#import "SDLGlobalProperty.h"
#import "SDLHMILevel.h"
#import "SDLHMIZoneCapabilities.h"
#import "SDLIgnitionStableStatus.h"
#import "SDLIgnitionStatus.h"
#import "SDLImageFieldName.h"
#import "SDLImageType.h"
#import "SDLInteractionMode.h"
#import "SDLKeyboardEvent.h"
#import "SDLKeyboardLayout.h"
#import "SDLKeypressMode.h"
#import "SDLLanguage.h"
#import "SDLLayoutMode.h"
#import "SDLLockScreenStatus.h"
#import "SDLMaintenanceModeStatus.h"
#import "SDLMediaClockFormat.h"
#import "SDLMetadataType.h"
#import "SDLModuleType.h"
#import "SDLPRNDL.h"
#import "SDLPermissionStatus.h"
#import "SDLPowerModeQualificationStatus.h"
#import "SDLPowerModeStatus.h"
#import "SDLPredefinedLayout.h"
#import "SDLPrerecordedSpeech.h"
#import "SDLPrimaryAudioSource.h"
#import "SDLRadioBand.h"
#import "SDLRadioState.h"
#import "SDLRPCMessageType.h"
#import "SDLRequestType.h"
#import "SDLResult.h"
#import "SDLSamplingRate.h"
#import "SDLSoftButtonType.h"
#import "SDLSpeechCapabilities.h"
#import "SDLSystemAction.h"
#import "SDLSystemCapabilityType.h"
#import "SDLSystemContext.h"
#import "SDLTBTState.h"
#import "SDLTemperatureUnit.h"
#import "SDLTextAlignment.h"
#import "SDLTextFieldName.h"
#import "SDLTimerMode.h"
#import "SDLTouchType.h"
#import "SDLTriggerSource.h"
#import "SDLUpdateMode.h"
#import "SDLVehicleDataActiveStatus.h"
#import "SDLVehicleDataEventStatus.h"
#import "SDLVehicleDataNotificationStatus.h"
#import "SDLVehicleDataResultCode.h"
#import "SDLVehicleDataStatus.h"
#import "SDLVehicleDataType.h"
#import "SDLVentilationMode.h"
#import "SDLVideoStreamingCodec.h"
#import "SDLVideoStreamingProtocol.h"
#import "SDLVrCapabilities.h"
#import "SDLWarningLightStatus.h"
#import "SDLWayPointType.h"
#import "SDLWiperStatus.h"

// Developer API
// Configurations
#import "SDLConfiguration.h"
#import "SDLLifecycleConfiguration.h"
#import "SDLLockScreenConfiguration.h"
#import "SDLStreamingMediaConfiguration.h"

// Streaming
#import "SDLAudioStreamManager.h"
#import "SDLAudioStreamManagerDelegate.h"
#import "SDLCarWindowViewController.h"
#import "SDLStreamingAudioManagerType.h"
#import "SDLStreamingMediaManager.h"
#import "SDLTouchManager.h"
#import "SDLTouchManagerDelegate.h"
#import "SDLSecurityType.h"

// Files
#import "SDLArtwork.h"
#import "SDLFile.h"
#import "SDLFileManager.h"
#import "SDLFileManagerConstants.h"

// Lockscreen
#import "SDLLockScreenViewController.h"

// Lifecycle
#import "SDLManager.h"
#import "SDLManagerDelegate.h"

// Permissions
#import "SDLPermissionConstants.h"
#import "SDLPermissionManager.h"

// Touches
#import "SDLPinchGesture.h"
#import "SDLTouch.h"

// Utilities
#import "NSNumber+NumberType.h"
#import "SDLErrorConstants.h"
#import "SDLNotificationConstants.h"
#import "SDLStreamingMediaManagerConstants.h"

// Notifications
#import "SDLRPCNotificationNotification.h"
#import "SDLRPCResponseNotification.h"

// Logger
#import "SDLLogConstants.h"
#import "SDLLogConfiguration.h"
#import "SDLLogFileModule.h"
#import "SDLLogFilter.h"
#import "SDLLogManager.h"
#import "SDLLogMacros.h"
#import "SDLLogTarget.h"
#import "SDLLogTargetAppleSystemLog.h"
#import "SDLLogTargetFile.h"
#import "SDLLogTargetOSLog.h"

// Macros
#import "SDLMacros.h"
