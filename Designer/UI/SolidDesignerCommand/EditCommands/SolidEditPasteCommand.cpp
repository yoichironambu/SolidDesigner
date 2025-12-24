#include "SolidEditPasteCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditPasteCommand::SolidEditPasteCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_PASTE))
{

}

sdr::SolidEditPasteCommand::~SolidEditPasteCommand()
{

}

bool SolidEditPasteCommand::IsSupported() const
{
	return false;
}

bool SolidEditPasteCommand::IsVisible() const
{
	return false;
}

bool SolidEditPasteCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditPasteCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditPasteCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}