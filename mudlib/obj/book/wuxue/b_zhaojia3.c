// 

inherit ITEM;

void create()
{
	set_name("���мܷ����¾�",({"zhaojiaxia","xia"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	 "һ�����ظ񶷷���������ѧ�鼮��\n"
             );
	set("value",3000);
        set("skill", ([
	"name":"parry",
        "exp_required":10000,
        "max_skill":60,
        "sen_cost":30,
        ]) );
}
 
