// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("������",({"xiang"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","һ��ͭ�ʶƽ����񣬹��Ƽ�ֵ���ǡ�\n");
		set("value",50000);
		set("material","gold");
	}
}
