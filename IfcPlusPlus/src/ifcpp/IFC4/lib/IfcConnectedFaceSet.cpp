/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectedFaceSet.h"
#include "ifcpp/IFC4/include/IfcFace.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcConnectedFaceSet 
IfcConnectedFaceSet::IfcConnectedFaceSet( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcConnectedFaceSet::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcConnectedFaceSet> copy_self( new IfcConnectedFaceSet() );
	for( size_t ii=0; ii<m_CfsFaces.size(); ++ii )
	{
		auto item_ii = m_CfsFaces[ii];
		if( item_ii )
		{
			copy_self->m_CfsFaces.emplace_back( dynamic_pointer_cast<IfcFace>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcConnectedFaceSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCONNECTEDFACESET" << "(";
	writeEntityList( stream, m_CfsFaces );
	stream << ");";
}
void IfcConnectedFaceSet::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcConnectedFaceSet::toString() const { return L"IfcConnectedFaceSet"; }
void IfcConnectedFaceSet::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConnectedFaceSet, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_CfsFaces, map );
}
void IfcConnectedFaceSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcTopologicalRepresentationItem::getAttributes( vec_attributes );
	if( !m_CfsFaces.empty() )
	{
		shared_ptr<AttributeObjectVector> CfsFaces_vec_object( new AttributeObjectVector() );
		std::copy( m_CfsFaces.begin(), m_CfsFaces.end(), std::back_inserter( CfsFaces_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "CfsFaces", CfsFaces_vec_object ) );
	}
}
void IfcConnectedFaceSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcTopologicalRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcConnectedFaceSet::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcTopologicalRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcConnectedFaceSet::unlinkFromInverseCounterparts()
{
	IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts();
}
