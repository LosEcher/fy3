// music  yangzhou's  �ƺ�

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("���",({"chahu","hu"}));
	set_weight(500);
	if (clonep())
		set_default_object(__FILE__);
	else {
	set("long","һ���ǳ���ͨ�Ĳ����\n");
		set("unit", "��");
	set("value",50);
	set("max_liquid",10);
	}

	// because a container can contain different liquid
	// we set it to contain wine at the beginning
	set("liquid", ([
	"type":"tea",
	"name":"���",
	"remaining":10,
		"drunk_apply": 3,
	]));
}
