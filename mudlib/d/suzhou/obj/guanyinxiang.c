// daodejing-ii.c

inherit ITEM;

void create()
{
	set_name("����������",({"xiang"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("long","һ����������Ȼ����մ��������ȴҲ�ڸǲ�ס���ļ�ֵ��\n");
		set("value",10000);
		set("material","gold");
	}
}
