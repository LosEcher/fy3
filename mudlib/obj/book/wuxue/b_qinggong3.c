// 

inherit ITEM;

void create()
{
	set_name("���Ṧͼ���¾�",({"qinggongxia","xia"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	"һ�����ض�����Ծ����ѧ�鼮��\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"dodge",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
