// 

inherit ITEM;

void create()
{
	set_name("���Ṧͼ���о�",({"qinggongzhong","zhong"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�����ض�����Ծ����ѧ�鼮��\n"
             );
	set("value",2000);
        set("skill", ([
	"name":"dodge",
        "exp_required":5000,
        "max_skill":40,
        "sen_cost":20,
        ]) );
}
 
