// 

inherit ITEM;

void create()
{
	set_name("��ͽ�ָ��Ͼ�",({"gedoushang","shang"}));
        set_weight(100);
        set("unit", "��");
        set("long",
		"һ�����ظ�������ѧ�鼮��\n"
             );
	set("value",1000);
        set("skill", ([
	"name": "unarmed",
        "exp_required":100,
        "max_skill":20,
        "sen_cost":10,
        ]) );
}
 
