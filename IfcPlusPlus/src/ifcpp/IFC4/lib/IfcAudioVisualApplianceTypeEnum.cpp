/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcAudioVisualApplianceTypeEnum.h"

// TYPE IfcAudioVisualApplianceTypeEnum = ENUMERATION OF	(AMPLIFIER	,CAMERA	,DISPLAY	,MICROPHONE	,PLAYER	,PROJECTOR	,RECEIVER	,SPEAKER	,SWITCHER	,TELEPHONE	,TUNER	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcAudioVisualApplianceTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAudioVisualApplianceTypeEnum> copy_self( new IfcAudioVisualApplianceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcAudioVisualApplianceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCAUDIOVISUALAPPLIANCETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_AMPLIFIER:	stream << ".AMPLIFIER."; break;
		case ENUM_CAMERA:	stream << ".CAMERA."; break;
		case ENUM_DISPLAY:	stream << ".DISPLAY."; break;
		case ENUM_MICROPHONE:	stream << ".MICROPHONE."; break;
		case ENUM_PLAYER:	stream << ".PLAYER."; break;
		case ENUM_PROJECTOR:	stream << ".PROJECTOR."; break;
		case ENUM_RECEIVER:	stream << ".RECEIVER."; break;
		case ENUM_SPEAKER:	stream << ".SPEAKER."; break;
		case ENUM_SWITCHER:	stream << ".SWITCHER."; break;
		case ENUM_TELEPHONE:	stream << ".TELEPHONE."; break;
		case ENUM_TUNER:	stream << ".TUNER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAudioVisualApplianceTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AMPLIFIER:	return L"AMPLIFIER";
		case ENUM_CAMERA:	return L"CAMERA";
		case ENUM_DISPLAY:	return L"DISPLAY";
		case ENUM_MICROPHONE:	return L"MICROPHONE";
		case ENUM_PLAYER:	return L"PLAYER";
		case ENUM_PROJECTOR:	return L"PROJECTOR";
		case ENUM_RECEIVER:	return L"RECEIVER";
		case ENUM_SPEAKER:	return L"SPEAKER";
		case ENUM_SWITCHER:	return L"SWITCHER";
		case ENUM_TELEPHONE:	return L"TELEPHONE";
		case ENUM_TUNER:	return L"TUNER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcAudioVisualApplianceTypeEnum> IfcAudioVisualApplianceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAudioVisualApplianceTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAudioVisualApplianceTypeEnum>(); }
	shared_ptr<IfcAudioVisualApplianceTypeEnum> type_object( new IfcAudioVisualApplianceTypeEnum() );
	if( boost::iequals( arg, L".AMPLIFIER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_AMPLIFIER;
	}
	else if( boost::iequals( arg, L".CAMERA." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_CAMERA;
	}
	else if( boost::iequals( arg, L".DISPLAY." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_DISPLAY;
	}
	else if( boost::iequals( arg, L".MICROPHONE." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_MICROPHONE;
	}
	else if( boost::iequals( arg, L".PLAYER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_PLAYER;
	}
	else if( boost::iequals( arg, L".PROJECTOR." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_PROJECTOR;
	}
	else if( boost::iequals( arg, L".RECEIVER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_RECEIVER;
	}
	else if( boost::iequals( arg, L".SPEAKER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_SPEAKER;
	}
	else if( boost::iequals( arg, L".SWITCHER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_SWITCHER;
	}
	else if( boost::iequals( arg, L".TELEPHONE." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_TELEPHONE;
	}
	else if( boost::iequals( arg, L".TUNER." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_TUNER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcAudioVisualApplianceTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
