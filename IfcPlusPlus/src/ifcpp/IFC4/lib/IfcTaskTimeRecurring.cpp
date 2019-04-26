/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcDuration.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcRecurrencePattern.h"
#include "ifcpp/IFC4/include/IfcTaskDurationEnum.h"
#include "ifcpp/IFC4/include/IfcTaskTimeRecurring.h"

// ENTITY IfcTaskTimeRecurring 
IfcTaskTimeRecurring::IfcTaskTimeRecurring( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTaskTimeRecurring::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTaskTimeRecurring> copy_self( new IfcTaskTimeRecurring() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_DataOrigin ) { copy_self->m_DataOrigin = dynamic_pointer_cast<IfcDataOriginEnum>( m_DataOrigin->getDeepCopy(options) ); }
	if( m_UserDefinedDataOrigin ) { copy_self->m_UserDefinedDataOrigin = dynamic_pointer_cast<IfcLabel>( m_UserDefinedDataOrigin->getDeepCopy(options) ); }
	if( m_DurationType ) { copy_self->m_DurationType = dynamic_pointer_cast<IfcTaskDurationEnum>( m_DurationType->getDeepCopy(options) ); }
	if( m_ScheduleDuration ) { copy_self->m_ScheduleDuration = dynamic_pointer_cast<IfcDuration>( m_ScheduleDuration->getDeepCopy(options) ); }
	if( m_ScheduleStart ) { copy_self->m_ScheduleStart = dynamic_pointer_cast<IfcDateTime>( m_ScheduleStart->getDeepCopy(options) ); }
	if( m_ScheduleFinish ) { copy_self->m_ScheduleFinish = dynamic_pointer_cast<IfcDateTime>( m_ScheduleFinish->getDeepCopy(options) ); }
	if( m_EarlyStart ) { copy_self->m_EarlyStart = dynamic_pointer_cast<IfcDateTime>( m_EarlyStart->getDeepCopy(options) ); }
	if( m_EarlyFinish ) { copy_self->m_EarlyFinish = dynamic_pointer_cast<IfcDateTime>( m_EarlyFinish->getDeepCopy(options) ); }
	if( m_LateStart ) { copy_self->m_LateStart = dynamic_pointer_cast<IfcDateTime>( m_LateStart->getDeepCopy(options) ); }
	if( m_LateFinish ) { copy_self->m_LateFinish = dynamic_pointer_cast<IfcDateTime>( m_LateFinish->getDeepCopy(options) ); }
	if( m_FreeFloat ) { copy_self->m_FreeFloat = dynamic_pointer_cast<IfcDuration>( m_FreeFloat->getDeepCopy(options) ); }
	if( m_TotalFloat ) { copy_self->m_TotalFloat = dynamic_pointer_cast<IfcDuration>( m_TotalFloat->getDeepCopy(options) ); }
	if( m_IsCritical ) { copy_self->m_IsCritical = dynamic_pointer_cast<IfcBoolean>( m_IsCritical->getDeepCopy(options) ); }
	if( m_StatusTime ) { copy_self->m_StatusTime = dynamic_pointer_cast<IfcDateTime>( m_StatusTime->getDeepCopy(options) ); }
	if( m_ActualDuration ) { copy_self->m_ActualDuration = dynamic_pointer_cast<IfcDuration>( m_ActualDuration->getDeepCopy(options) ); }
	if( m_ActualStart ) { copy_self->m_ActualStart = dynamic_pointer_cast<IfcDateTime>( m_ActualStart->getDeepCopy(options) ); }
	if( m_ActualFinish ) { copy_self->m_ActualFinish = dynamic_pointer_cast<IfcDateTime>( m_ActualFinish->getDeepCopy(options) ); }
	if( m_RemainingTime ) { copy_self->m_RemainingTime = dynamic_pointer_cast<IfcDuration>( m_RemainingTime->getDeepCopy(options) ); }
	if( m_Completion ) { copy_self->m_Completion = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_Completion->getDeepCopy(options) ); }
	if( m_Recurrence ) { copy_self->m_Recurrence = dynamic_pointer_cast<IfcRecurrencePattern>( m_Recurrence->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTaskTimeRecurring::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTASKTIMERECURRING" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DurationType ) { m_DurationType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleDuration ) { m_ScheduleDuration->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleStart ) { m_ScheduleStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ScheduleFinish ) { m_ScheduleFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EarlyStart ) { m_EarlyStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EarlyFinish ) { m_EarlyFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LateStart ) { m_LateStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_LateFinish ) { m_LateFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FreeFloat ) { m_FreeFloat->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TotalFloat ) { m_TotalFloat->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_IsCritical ) { m_IsCritical->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StatusTime ) { m_StatusTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualDuration ) { m_ActualDuration->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualStart ) { m_ActualStart->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ActualFinish ) { m_ActualFinish->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RemainingTime ) { m_RemainingTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Completion ) { m_Completion->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Recurrence ) { stream << "#" << m_Recurrence->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcTaskTimeRecurring::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTaskTimeRecurring::toString() const { return L"IfcTaskTimeRecurring"; }
void IfcTaskTimeRecurring::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 21 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTaskTimeRecurring, expecting 21, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[1], map );
	m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[2], map );
	m_DurationType = IfcTaskDurationEnum::createObjectFromSTEP( args[3], map );
	m_ScheduleDuration = IfcDuration::createObjectFromSTEP( args[4], map );
	m_ScheduleStart = IfcDateTime::createObjectFromSTEP( args[5], map );
	m_ScheduleFinish = IfcDateTime::createObjectFromSTEP( args[6], map );
	m_EarlyStart = IfcDateTime::createObjectFromSTEP( args[7], map );
	m_EarlyFinish = IfcDateTime::createObjectFromSTEP( args[8], map );
	m_LateStart = IfcDateTime::createObjectFromSTEP( args[9], map );
	m_LateFinish = IfcDateTime::createObjectFromSTEP( args[10], map );
	m_FreeFloat = IfcDuration::createObjectFromSTEP( args[11], map );
	m_TotalFloat = IfcDuration::createObjectFromSTEP( args[12], map );
	m_IsCritical = IfcBoolean::createObjectFromSTEP( args[13], map );
	m_StatusTime = IfcDateTime::createObjectFromSTEP( args[14], map );
	m_ActualDuration = IfcDuration::createObjectFromSTEP( args[15], map );
	m_ActualStart = IfcDateTime::createObjectFromSTEP( args[16], map );
	m_ActualFinish = IfcDateTime::createObjectFromSTEP( args[17], map );
	m_RemainingTime = IfcDuration::createObjectFromSTEP( args[18], map );
	m_Completion = IfcPositiveRatioMeasure::createObjectFromSTEP( args[19], map );
	readEntityReference( args[20], m_Recurrence, map );
}
void IfcTaskTimeRecurring::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcTaskTime::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Recurrence", m_Recurrence ) );
}
void IfcTaskTimeRecurring::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcTaskTime::getAttributesInverse( vec_attributes_inverse );
}
void IfcTaskTimeRecurring::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTaskTime::setInverseCounterparts( ptr_self_entity );
}
void IfcTaskTimeRecurring::unlinkFromInverseCounterparts()
{
	IfcTaskTime::unlinkFromInverseCounterparts();
}
