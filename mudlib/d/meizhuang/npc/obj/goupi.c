// turou.c Ұ���� by ksusan 8/03/97 8:45

inherit ITEM;

void create()
{
	set_name("��Ƥ",({"gou pi","pi"}));
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","һ���ϺõĹ�Ƥ�������ӿ�������Ǯ��\n");
	set("unit","��");
	set("value",200);
	}
}
