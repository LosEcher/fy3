// 

inherit ITEM;

void create()
{
	set_name("���ڹ��ķ��о�",({"neigongzhong","zhong"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�������ź��������������ŵ���ѧ�鼮��\n"
             );
	set("value",2000);
        set("skill", ([
	"name":"force",
        "exp_required":5000,
        "max_skill":40,
        "sen_cost":20,
        ]) );
}
 
