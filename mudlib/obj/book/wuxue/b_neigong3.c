// 

inherit ITEM;

void create()
{
	set_name("���ڹ��ķ��¾�",({"neigongxia","xia"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�������ź��������������ŵ���ѧ�鼮��\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"force",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
