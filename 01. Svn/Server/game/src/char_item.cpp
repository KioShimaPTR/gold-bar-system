//Search:
		case ITEM_USE:
			{

//Add below:
				switch(item->GetVnum())
				{
					case 80003:
					{
						if (GetExchange() || IsOpenSafebox() || GetShopOwner())
						{
							ChatPacket(CHAT_TYPE_INFO, "Bu pencere açýkken bu iþlemi gerçekleþtiremezsin.");
							return false;
						}
						if ((GetGold() + 50000000) <= GOLD_MAX-1)
						{
							PointChange(POINT_GOLD, +50000000, false);
							ChatPacket(CHAT_TYPE_INFO, "50.000.000 Yang kazandýn.");
							item->SetCount(item->GetCount() - 1);
							break;
						}
						else
						{
							ChatPacket(CHAT_TYPE_INFO, "Maximum yang oranýný geçemezsin.");
							return false;
						}
					}
					case 80004:
					{
						if (GetExchange() || IsOpenSafebox() || GetShopOwner())
						{
							ChatPacket(CHAT_TYPE_INFO, "Bu pencere açýkken bu iþlemi gerçekleþtiremezsin.");
							return false;
						}
						if ((GetGold() + 100000000) <= GOLD_MAX-1)
						{
							PointChange(POINT_GOLD, +100000000, false);
							ChatPacket(CHAT_TYPE_INFO, "100.000.000 Yang kazandýn.");
							item->SetCount(item->GetCount() - 1);
							break;
						}
						else
						{
							ChatPacket(CHAT_TYPE_INFO, "Maximum yang oranýný geçemezsin.");
							return false;
						}
					}
					case 80005:
					{
						if (GetExchange() || IsOpenSafebox() || GetShopOwner())
						{
							ChatPacket(CHAT_TYPE_INFO, "Bu pencere açýkken bu iþlemi gerçekleþtiremezsin.");
							return false;
						}
						if ((GetGold() + 250000000) <= GOLD_MAX-1)
						{
							PointChange(POINT_GOLD, +250000000, false);
							ChatPacket(CHAT_TYPE_INFO, "250.000.000 Yang kazandýn.");
							item->SetCount(item->GetCount() - 1);
							break;
						}
						else
						{
							ChatPacket(CHAT_TYPE_INFO, "Maximum yang oranýný geçemezsin.");
							return false;
						}
					}
					case 80006:
					{
						if (GetExchange() || IsOpenSafebox() || GetShopOwner())
						{
							ChatPacket(CHAT_TYPE_INFO, "Bu pencere açýkken bu iþlemi gerçekleþtiremezsin.");
							return false;
						}
						if ((GetGold() + 500000000) <= GOLD_MAX-1)
						{
							PointChange(POINT_GOLD, +500000000, false);
							ChatPacket(CHAT_TYPE_INFO, "500.000.000 Yang kazandýn.");
							item->SetCount(item->GetCount() - 1);
							break;
						}
						else
						{
							ChatPacket(CHAT_TYPE_INFO, "Maximum yang oranýný geçemezsin.");
							return false;
						}
					}
					case 80007:
					{
						if (GetExchange() || IsOpenSafebox() || GetShopOwner())
						{
							ChatPacket(CHAT_TYPE_INFO, "Bu pencere açýkken bu iþlemi gerçekleþtiremezsin.");
							return false;
						}
						if ((GetGold() + 1000000000) <= GOLD_MAX-1)
						{
							PointChange(POINT_GOLD, +1000000000, false);
							ChatPacket(CHAT_TYPE_INFO, "1.000.000.000 Yang kazandýn.");
							item->SetCount(item->GetCount() - 1);
							break;
						}
						else
						{
							ChatPacket(CHAT_TYPE_INFO, "Maximum yang oranýný geçemezsin.");
							return false;
						}
					}
				}

/**** Koded Bahadýr Bozdað || Cosby || KioShima ****/